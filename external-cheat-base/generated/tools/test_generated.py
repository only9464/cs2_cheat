#!/usr/bin/env python3
"""Build and run the generated/ test suite.

Two things are checked:

1. **The generated headers still convert.**  ``dump_offset_tables.py --check``
   fails if ``offsets.hpp`` / ``buttons.hpp`` / ``client_dll.hpp`` are in the
   pre-runtime form, so a fresh ``cs2-dumper`` dump cannot slip in unnoticed.
2. **The runtime lookup works.**  ``tests/offsets_tests.cpp`` is compiled with
   the same strict flags the project's CI uses (``-Wall -Wextra -Wpedantic
   -Werror``) and executed against the offline fixtures in ``tests/fixtures``.

Nothing here touches the network or needs Visual Studio; a MinGW g++ is enough.
Pass ``--compiler`` to point at a different one (MSVC is not supported by this
script -- use the Visual Studio project for that).
"""

from __future__ import annotations

import argparse
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parents[3]
GENERATED_DIR = REPO_ROOT / "external-cheat-base" / "generated"
TESTS_DIR = GENERATED_DIR / "tests"
FIXTURES_DIR = TESTS_DIR / "fixtures"
BUILD_DIR = REPO_ROOT / "build" / "gentest"

#: Mirrors the compile flags used by the project's Dockerfile so a warning that
#: would break CI fails here first. The charset pair is part of that mirror:
#: the interface is localised, so the source and execution charsets have to be
#: UTF-8 in every build that compiles an overlay source.
STRICT_FLAGS = [
    "-std=c++20",
    "-Wall",
    "-Wextra",
    "-Wpedantic",
    "-Werror",
    "-Wno-unknown-pragmas",
    "-finput-charset=UTF-8",
    "-fexec-charset=UTF-8",
    "-D_WIN32_WINNT=0x0A00",
    "-DUNICODE",
    "-D_UNICODE",
]

DEFAULT_COMPILERS = [
    r"E:\Softwares\mingw64\bin\g++.exe",
    "g++",
    "x86_64-w64-mingw32-g++-posix",
]


def find_compiler(explicit: str | None) -> str | None:
    if explicit:
        return explicit if shutil.which(explicit) or Path(explicit).is_file() else None
    for candidate in DEFAULT_COMPILERS:
        if Path(candidate).is_file() or shutil.which(candidate):
            return candidate
    return None


def run(command: list[str], **kwargs) -> subprocess.CompletedProcess:
    printable = " ".join(str(part) for part in command)
    print(f"$ {printable}", flush=True)
    return subprocess.run(command, **kwargs)


def check_generated_headers() -> bool:
    print("== generated headers ==", flush=True)
    result = run([sys.executable, str(GENERATED_DIR / "tools" / "dump_offset_tables.py"),
                  "--check"])
    return result.returncode == 0


# --------------------------------------------------------------- module audit
# The generated offsets dump prints a single ``// Module: client.dll`` banner
# before its first module and then only ``// Module: engine2.dll`` and friends
# directly above their own namespaces.  A converter that trusted the banner
# stamped every later module with "client.dll", which resolves to a plausible but
# wrong address at run time and is invisible to any test that only looks at the
# literal.  This audit re-derives the module from the namespace path and fails on
# any disagreement, in the headers and in the converter itself.

CONSTANT_RE = re.compile(
    r"runtime::dumper_constant\s+"
    r"(?P<name>[A-Za-z_]\w*)\s*\{\s*"
    r"::cs2_dumper::runtime::Category::(?P<category>Offset|Button|Schema)\s*,\s*"
    r'"(?P<module>[^"]+)"\s*,\s*'
    r'(?P<owner>nullptr|"[^"]*")\s*,\s*'
    r'"(?P<symbol>[^"]+)"\s*,\s*'
    r"(?P<value>-?0x[0-9A-Fa-f]+|-?\d+)\s*\}\s*;"
)
NAMESPACE_RE = re.compile(r"^\s*namespace\s+([A-Za-z_]\w*)\s*\{?\s*$")
MODULE_NAMESPACE_RE = re.compile(r"^(?P<stem>.+)_dll$")


def expected_module(namespace_stack: list[str], banner: str | None) -> str | None:
    """What the module must be for a symbol at this namespace path."""
    for name in reversed(namespace_stack):
        match = MODULE_NAMESPACE_RE.match(name)
        if match:
            return match.group("stem") + ".dll"
    # ``buttons.hpp`` is wrapped in ``namespace cs2_dumper`` alone and carries a
    # banner there instead of a module namespace.
    if namespace_stack and namespace_stack[0] == "cs2_dumper":
        return banner
    return None


def audit_header(path: Path) -> list[str]:
    """Return one message per constant whose module disagrees with its path."""
    problems: list[str] = []
    stack: list[str] = []
    banner: str | None = None

    for number, line in enumerate(path.read_text(encoding="utf-8").splitlines(), 1):
        stripped = line.strip()
        if stripped.startswith("// Module:"):
            if len(stack) <= 1:
                banner = stripped[len("// Module:"):].strip()
            continue
        if stripped == "}":
            if stack:
                stack.pop()
            continue
        namespace = NAMESPACE_RE.match(line)
        if namespace:
            stack.append(namespace.group(1))
            continue
        constant = CONSTANT_RE.search(line)
        if constant is None:
            continue
        want = expected_module(stack, banner)
        if want is None:
            problems.append(
                f"{path.name}:{number}: cannot tell which module "
                f"{constant.group('name')} belongs to (path {'/'.join(stack)})"
            )
        elif constant.group("module") != want:
            problems.append(
                f"{path.name}:{number}: {constant.group('name')} claims module "
                f"'{constant.group('module')}' but its namespace says '{want}'"
            )
        if constant.group("symbol") != constant.group("name"):
            problems.append(
                f"{path.name}:{number}: {constant.group('name')} names symbol "
                f"'{constant.group('symbol')}'"
            )
        if constant.group("category") == "Schema" and constant.group("owner") == "nullptr":
            problems.append(
                f"{path.name}:{number}: schema constant {constant.group('name')} "
                f"has no class name"
            )
        if constant.group("category") != "Schema" and constant.group("owner") != "nullptr":
            problems.append(
                f"{path.name}:{number}: {constant.group('category')} constant "
                f"{constant.group('name')} carries a class name"
            )

    return problems


def check_module_attribution() -> bool:
    print("\n== module attribution ==", flush=True)
    problems: list[str] = []
    counts: dict[str, int] = {}

    for filename in ("offsets.hpp", "buttons.hpp", "client_dll.hpp"):
        path = GENERATED_DIR / filename
        found = audit_header(path)
        problems.extend(found)
        text = path.read_text(encoding="utf-8")
        for match in CONSTANT_RE.finditer(text):
            module = match.group("module")
            counts[module] = counts.get(module, 0) + 1
        print(f"{filename}: {len(CONSTANT_RE.findall(text))} constants, "
              f"{len(found)} problem(s)")

    for problem in problems:
        print(f"  {problem}")
    for module, count in sorted(counts.items()):
        print(f"    {module}: {count}")

    # The offset dump is the file where the bug hid: more than one module must be
    # represented, or the audit is not actually exercising the namespace path.
    if len([m for m in counts if m != "client.dll"]) < 4:
        problems.append(
            "offsets.hpp no longer covers the non-client modules; "
            "the attribution audit would be vacuous"
        )
        print(f"  {problems[-1]}")

    return not problems


def build_and_run_tests(compiler: str) -> bool:
    return build_and_run_one(
        compiler,
        source=TESTS_DIR / "offsets_tests.cpp",
        binary_name="offsets_tests.exe",
        arguments=[str(FIXTURES_DIR), str(GENERATED_DIR)],
        link_libraries=["-lwinhttp"],
    )


def build_and_run_localisation_tests(compiler: str) -> bool:
    """Check that the localised interface text survives into the binary.

    A wrong source/execution charset compiles cleanly and shows mojibake or
    blank glyphs on screen, so this needs its own executable rather than a
    header audit.
    """
    return build_and_run_one(
        compiler,
        source=TESTS_DIR / "localisation_tests.cpp",
        binary_name="localisation_tests.exe",
        arguments=[],
        link_libraries=[],
    )


def build_and_run_one(
    compiler: str,
    source: Path,
    binary_name: str,
    arguments: list[str],
    link_libraries: list[str],
) -> bool:
    BUILD_DIR.mkdir(parents=True, exist_ok=True)
    binary = BUILD_DIR / binary_name

    print(f"\n== compile {source.name} ==", flush=True)
    compile_command = [
        compiler,
        *STRICT_FLAGS,
        f"-I{GENERATED_DIR}",
        "-O1",
        str(source),
        "-o",
        str(binary),
        *link_libraries,
    ]
    if run(compile_command).returncode != 0:
        print("compile FAILED", file=sys.stderr)
        return False

    print(f"\n== run {binary.name} ==", flush=True)
    result = run([str(binary), *arguments])
    return result.returncode == 0


def main(argv: list[str]) -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument(
        "--compiler",
        help="path to a g++-compatible compiler (default: the bundled MinGW one)",
    )
    parser.add_argument(
        "--skip-header-check",
        action="store_true",
        help="do not verify that the generated headers are in runtime form",
    )
    args = parser.parse_args(argv)

    if not FIXTURES_DIR.is_dir():
        print(f"error: missing {FIXTURES_DIR}", file=sys.stderr)
        return 2

    ok = True
    if not args.skip_header_check:
        ok = check_generated_headers() and ok
        ok = check_module_attribution() and ok

    compiler = find_compiler(args.compiler)
    if compiler is None:
        print(
            "error: no g++ found; pass --compiler or install MinGW",
            file=sys.stderr,
        )
        return 2
    print(f"compiler: {compiler}")
    ok = build_and_run_tests(compiler) and ok
    ok = build_and_run_localisation_tests(compiler) and ok

    print()
    print("ALL TESTS PASSED" if ok else "TESTS FAILED")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
