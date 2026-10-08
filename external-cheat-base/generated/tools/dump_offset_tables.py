#!/usr/bin/env python3
"""Rewrite the generated offset headers so they resolve at run time.

The three headers in ``external-cheat-base/generated`` are produced by
`cs2-dumper <https://github.com/a2x/cs2-dumper>`_ and used to be nothing but
``constexpr std::ptrdiff_t`` literals baked into the executable.  This tool
converts each of those literals into a ``runtime::dumper_constant`` object that
looks the value up in the registry filled from the live cs2-dumper JSON payload,
while keeping the dump-time literal as a fallback.  Everything else in the file
-- the banner, the ``namespace`` nesting, the per-class comments, the enum
definitions -- is preserved byte for byte, so the diff stays reviewable and the
generated headers keep their original shape.

Converted line::

    constexpr std::ptrdiff_t dwEntityList = 0x2717828;

becomes::

    inline constexpr ::cs2_dumper::runtime::dumper_constant dwEntityList{
        ::cs2_dumper::runtime::Category::Offset, "client.dll", nullptr,
        "dwEntityList", 0x2717828};

Inside a class namespace the enclosing namespace name becomes the ``className``
argument, which is what lets the schema lookup walk the ``parent`` chain::

    namespace C_BaseEntity {
        inline constexpr ::cs2_dumper::runtime::dumper_constant m_iTeamNum{
            ::cs2_dumper::runtime::Category::Schema, "client.dll", "C_BaseEntity",
            "m_iTeamNum", 0x3C};
    }

Enum members are left alone: they are compile-time switch labels and the
cs2-dumper payload exposes them as enum members, not as offsets.

Usage::

    python tools/dump_offset_tables.py --check      # report, change nothing
    python tools/dump_offset_tables.py --print      # show the new files
    python tools/dump_offset_tables.py              # rewrite in place

The tool is idempotent: running it on an already converted header reports
``already converted`` and writes nothing.
"""

from __future__ import annotations

import argparse
import re
import sys
from dataclasses import dataclass
from pathlib import Path

GENERATED_DIR = Path(__file__).resolve().parent.parent

#: header -> (Category enumerator, top level context)
#: ``context`` is the name reported when a symbol sits outside any class
#: namespace (module level offsets and buttons).
TARGETS = {
    "offsets.hpp": ("Offset", None),
    "buttons.hpp": ("Button", None),
    "client_dll.hpp": ("Schema", "class"),
}

RUNTIME_INCLUDE = '#include "offsets_runtime.hpp"'

# ``            constexpr std::ptrdiff_t dwEntityList = 0x2717828; // comment``
CONSTANT_RE = re.compile(
    r"^(?P<indent>[ \t]*)"
    r"constexpr\s+std::ptrdiff_t\s+"
    r"(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*=\s*"
    r"(?P<value>-?0x[0-9A-Fa-f]+|-?\d+)"
    r"\s*;(?P<trailing>.*)$"
)

# ``namespace C_BaseEntity {`` optionally with the brace on the next line
NAMESPACE_OPEN_RE = re.compile(r"^(?P<indent>[ \t]*)namespace\s+(?P<name>[A-Za-z_]\w*)\s*\{")
NAMESPACE_OPEN_BARE_RE = re.compile(r"^(?P<indent>[ \t]*)namespace\s+(?P<name>[A-Za-z_]\w*)\s*$")

# A line that already went through this tool.
CONVERTED_RE = re.compile(r"runtime::dumper_constant\s+[A-Za-z_]\w*\s*\{")


@dataclass
class Conversion:
    """What happened to one file."""

    filename: str
    total: int = 0          # constants found
    converted: int = 0      # constants rewritten in this run
    already: int = 0        # constants already in runtime form
    repaired: int = 0       # converted constants whose module name was wrong
    modules: dict[str, int] = None

    def __post_init__(self) -> None:
        if self.modules is None:
            self.modules = {}

    @property
    def changed(self) -> bool:
        return self.converted > 0 or self.repaired > 0


def module_filename(module: str) -> str:
    """``client.dll`` -> ``client.dll`` (the key cs2-dumper uses in JSON)."""
    return module


def find_module(lines: list[str]) -> str:
    """Read the first ``// Module: x.dll`` banner, defaulting to client.dll."""
    for line in lines:
        stripped = line.strip()
        if stripped.startswith("// Module:"):
            return stripped[len("// Module:"):].strip()
    return "client.dll"


def module_from_namespace(name: str) -> str | None:
    """``client_dll`` -> ``client.dll``; None when the name carries no module.

    Only the cs2-dumper module namespaces follow this convention.  The other
    namespaces in these headers (``offsets``, ``schemas``, ``buttons`` and the
    class namespaces) do not, which is exactly how a module namespace is told
    apart from a container.
    """
    if name.endswith("_dll"):
        return name[: -len("_dll")] + ".dll"
    return None


def scan_module_mapping(
    lines: list[str],
) -> tuple[dict[str, str], dict[str, str], str | None]:
    """Resolve the module of every namespace in one pass.

    Returns ``(mapping, banner_for, default)`` where ``mapping`` holds the
    resolved module for each module namespace path, ``banner_for`` holds the raw
    ``// Module: x.dll`` banners keyed by the namespace they were printed in, and
    ``default`` is the module used for symbols outside every module namespace.

    The module name must come from the namespace, not from the banner: the
    offset dump prints ``// Module: client.dll`` once, before the first module,
    and then only ``// Module: engine2.dll`` and friends directly above their own
    namespaces -- while a namespace such as ``schemas`` or ``buttons`` carries a
    banner even though it is a container, not a module.
    """
    mapping: dict[str, str] = {}
    banner_for: dict[str, str] = {}
    stack: list[str] = []
    default: str | None = None

    for line in lines:
        if line.strip().startswith("// Module:"):
            banner = line.strip()[len("// Module:"):].strip()
            if stack:
                banner_for.setdefault("/".join(stack), banner)
            elif default is None:
                default = banner
            continue

        open_match = NAMESPACE_OPEN_RE.match(line) or NAMESPACE_OPEN_BARE_RE.match(line)
        if open_match:
            stack.append(open_match.group("name"))
            # Innermost namespace that names a module wins.
            for depth in range(len(stack), 0, -1):
                derived = module_from_namespace(stack[depth - 1])
                if derived is not None:
                    mapping["/".join(stack[:depth])] = derived
                    break
            continue

        if line.strip() == "}" and stack:
            stack.pop()

    # ``buttons.hpp`` is wrapped in ``namespace cs2_dumper`` only, so its banner
    # sits at the logical root rather than inside the namespace holding the
    # constants.
    if "cs2_dumper" in banner_for and "cs2_dumper" not in mapping:
        mapping["cs2_dumper"] = banner_for["cs2_dumper"]

    return mapping, banner_for, default


def resolve_module(
    mapping: dict[str, str],
    banner_for: dict[str, str],
    default: str | None,
    namespace_stack: list[str],
    fallback: str,
) -> tuple[str, int]:
    """Resolve the module and its namespace depth for the current path.

    Returns the module name and how many leading namespaces belong to the
    module, so the caller can tell which namespaces below it name the class.
    """
    for depth in range(len(namespace_stack), 0, -1):
        key = "/".join(namespace_stack[:depth])
        if key in mapping:
            return mapping[key], depth
        banner = banner_for.get(key)
        if banner is not None:
            return banner, depth
    if default:
        return default, 0
    return fallback, len(namespace_stack)


def convert_file(path: Path, category: str, kind: str | None) -> tuple[Conversion, str]:
    """Return the conversion report and the new text for one header."""
    text = path.read_text(encoding="utf-8")
    newline = "\r\n" if "\r\n" in text else "\n"
    # Keep the trailing newline handling predictable while splitting.
    had_trailing_newline = text.endswith(("\n", "\r"))
    lines = text.splitlines()

    report = Conversion(filename=path.name)

    module_map, banner_for, default_module = scan_module_mapping(lines)
    module_banner = find_module(lines)
    namespace_stack: list[str] = []
    depth = 0

    out: list[str] = []
    # A header that already carries the runtime include must not grow a second
    # copy when the tool runs again.
    include_present = any(line.strip() == RUNTIME_INCLUDE for line in lines)
    include_written = include_present
    include_seen = False

    for line in lines:
        # --- bookkeeping: namespace open/close -------------------------------
        open_match = NAMESPACE_OPEN_RE.match(line) or NAMESPACE_OPEN_BARE_RE.match(line)
        if open_match:
            namespace_stack.append(open_match.group("name"))
            depth += 1
            out.append(line)
            continue

        # A closing brace pops one namespace level.  The generated files never
        # put anything else on such a line, and the ``};`` that terminates an
        # enum is caught earlier by the constant/enum branches because those
        # lines carry the enumerator.
        if line.strip() == "}":
            if depth > 0:
                depth -= 1
                if namespace_stack:
                    namespace_stack.pop()
            out.append(line)
            continue

        # --- rewrite the include block --------------------------------------
        if line.strip() == RUNTIME_INCLUDE:
            # Keep exactly one copy, wherever the file already has it.
            if not include_seen:
                include_seen = True
                out.append(line)
            continue

        if not include_written and line.startswith("#include"):
            # Emit the runtime include once, immediately before the first
            # cs2-dumper include, and let the rest of the block pass through.
            out.append(RUNTIME_INCLUDE)
            include_written = True
            out.append(line)
            continue

        # --- rewrite a constant ---------------------------------------------
        constant = CONSTANT_RE.match(line)
        if constant:
            report.total += 1
            name = constant.group("name")
            value = constant.group("value")
            indent = constant.group("indent")
            trailing_comment = constant.group("trailing").strip()
            if trailing_comment.startswith("//"):
                trailing = "  " + trailing_comment
            else:
                trailing = ""

            module, module_depth = resolve_module(
                module_map, banner_for, default_module, namespace_stack, module_banner
            )

            if kind == "class":
                # Everything below the module path is the class (and possibly a
                # nested struct) namespace.
                owner_stack = namespace_stack[module_depth:]
                class_name = owner_stack[-1] if owner_stack else None
                owner = f'"{class_name}"' if class_name else "nullptr"
            else:
                owner = "nullptr"

            report.modules[module] = report.modules.get(module, 0) + 1

            body = (
                f"{indent}inline constexpr ::cs2_dumper::runtime::dumper_constant "
                f"{name}{{"
                f"::cs2_dumper::runtime::Category::{category}, "
                f'"{module}", {owner}, "{name}", {value}}};'
                f"{trailing}"
            )
            out.append(body)
            report.converted += 1
            continue

        converted = GENERATED_RE.search(line)
        if converted:
            report.total += 1
            name = converted.group("name")
            module, module_depth = resolve_module(
                module_map, banner_for, default_module, namespace_stack, module_banner
            )
            stored_module = converted.group("module")
            if stored_module == module:
                report.already += 1
                out.append(line)
                continue

            # An already converted constant that names the wrong module.  The
            # generated offsets dump prints one banner before the first module,
            # so a converter that trusted the banner stamped every later module
            # with "client.dll"; re-derive the module from the namespace and
            # rewrite the line.  The literal itself is untouched.
            indent = line[: len(line) - len(line.lstrip())]
            owner = "nullptr"
            if converted.group("category") == "Schema":
                owner_stack = namespace_stack[module_depth:]
                if owner_stack:
                    owner = f'"{owner_stack[-1]}"'
            out.append(
                f"{indent}inline constexpr ::cs2_dumper::runtime::dumper_constant "
                f"{name}{{"
                f"::cs2_dumper::runtime::Category::{converted.group('category')}, "
                f'"{module}", {owner}, "{name}", {converted.group("value")}}};'
            )
            report.modules[module] = report.modules.get(module, 0) + 1
            report.repaired += 1
            continue

        out.append(line)

    if not include_written:
        # Header without an include block: place the runtime include after the
        # ``#pragma once`` so the definition is always visible.
        for index, line in enumerate(out):
            if line.strip().startswith("#pragma once"):
                out.insert(index + 1, "")
                out.insert(index + 2, RUNTIME_INCLUDE)
                include_written = True
                break

    new_text = newline.join(out)
    if had_trailing_newline:
        new_text += newline
    return report, new_text


GENERATED_RE = re.compile(
    r"runtime::dumper_constant\s+"
    r"(?P<name>[A-Za-z_]\w*)\s*\{\s*"
    r"::cs2_dumper::runtime::Category::(?P<category>Offset|Button|Schema)\s*,\s*"
    r'"(?P<module>[^"]+)"\s*,\s*'
    r'(?P<owner>nullptr|"[^"]*")\s*,\s*'
    r'"(?P<symbol>[^"]+)"\s*,\s*'
    r"(?P<value>-?0x[0-9A-Fa-f]+|-?\d+)\s*\}\s*;"
)


@dataclass
class VerifyReport:
    """Result of checking the headers against the live cs2-dumper payload."""

    filename: str
    checked: int = 0
    missing: list[str] = None
    mismatched: list[tuple[str, int, int]] = None
    unparsed: int = 0

    def __post_init__(self) -> None:
        if self.missing is None:
            self.missing = []
        if self.mismatched is None:
            self.mismatched = []

    @property
    def ok(self) -> bool:
        return not self.missing and not self.mismatched and self.unparsed == 0


def fetch_json(url: str, timeout: float) -> dict:
    """Download and decode one cs2-dumper payload."""
    import json
    import urllib.request

    request = urllib.request.Request(
        url, headers={"User-Agent": "cs2-cheat-offsets-verifier/1.0"}
    )
    with urllib.request.urlopen(request, timeout=timeout) as response:
        body = response.read()
    return json.loads(body.decode("utf-8"))


def verify_file(
    path: Path,
    category: str,
    kind: str | None,
    payloads: dict[str, dict],
) -> VerifyReport:
    """Compare every literal in one header against the live payload.

    This is the check that proves the rewrite kept the dump-time fallbacks
    honest: each ``dumper_constant`` must name a symbol that exists upstream and
    must carry the value upstream reports for it.
    """
    report = VerifyReport(filename=path.name)
    text = path.read_text(encoding="utf-8")

    for match in GENERATED_RE.finditer(text):
        name = match.group("name")
        module = match.group("module")
        owner = match.group("owner")
        symbol = match.group("symbol")
        value = int(match.group("value"), 0)
        report.checked += 1

        document = payloads.get(match.group("category"))
        if document is None:
            report.unparsed += 1
            continue
        module_body = document.get(module)
        if module_body is None:
            report.missing.append(f"{module}/{name} (module not in the payload)")
            continue

        if match.group("category") == "Schema":
            if owner == "nullptr":
                report.unparsed += 1
                continue
            class_name = owner.strip('"')
            body = module_body.get("classes", {}).get(class_name)
            if body is None:
                body = module_body.get("enums", {}).get(class_name)
            if body is None:
                report.missing.append(f"{class_name}::{name} (class not in the payload)")
                continue
            upstream = body.get("fields", {})
            if symbol not in upstream:
                upstream = body.get("members", {})
            if symbol not in upstream:
                report.missing.append(f"{class_name}::{symbol} (field not in the payload)")
                continue
            upstream_value = upstream[symbol]
        else:
            if symbol not in module_body:
                report.missing.append(f"{module}/{symbol} (symbol not in the payload)")
                continue
            upstream_value = module_body[symbol]

        if not isinstance(upstream_value, int):
            report.unparsed += 1
            continue
        if upstream_value != value:
            report.mismatched.append((f"{module}/{symbol}", value, upstream_value))

    return report


def main(argv: list[str]) -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    mode = parser.add_mutually_exclusive_group()
    mode.add_argument(
        "--check",
        action="store_true",
        help="report whether the headers are already converted; write nothing",
    )
    mode.add_argument(
        "--print",
        dest="print_only",
        action="store_true",
        help="print the converted headers instead of writing them",
    )
    mode.add_argument(
        "--verify",
        action="store_true",
        help="download the live cs2-dumper payload and check every literal "
        "against it",
    )
    parser.add_argument(
        "--directory",
        type=Path,
        default=GENERATED_DIR,
        help="directory holding the generated headers (default: generated/)",
    )
    parser.add_argument(
        "--base-url",
        default="https://raw.githubusercontent.com/a2x/cs2-dumper/main/output/",
        help="payload directory used by --verify",
    )
    parser.add_argument(
        "--timeout",
        type=float,
        default=30.0,
        help="per-request timeout in seconds for --verify",
    )
    args = parser.parse_args(argv)

    if not args.base_url.endswith("/"):
        args.base_url += "/"

    directory: Path = args.directory
    if not directory.is_dir():
        print(f"error: {directory} is not a directory", file=sys.stderr)
        return 2

    reports: list[Conversion] = []
    outputs: dict[Path, str] = {}

    for filename, (category, kind) in TARGETS.items():
        path = directory / filename
        if not path.is_file():
            print(f"error: missing {path}", file=sys.stderr)
            return 2
        report, new_text = convert_file(path, category, kind)
        reports.append(report)
        outputs[path] = new_text

    failed = False
    for report in reports:
        state = "converted" if report.changed else "already converted"
        detail = f", {report.repaired} module name(s) repaired" if report.repaired else ""
        print(f"{report.filename}: {report.total} constants, {state}{detail}")
        for module, count in sorted(report.modules.items()):
            print(f"    {module}: {count}")

    if args.check:
        # In check mode a stale header is a failure: the caller wants to know
        # whether running the tool would change anything.
        for report in reports:
            if report.changed or report.total == 0:
                failed = True
        if failed:
            print("\nheaders are NOT converted; run without --check to rewrite")
            return 1
        print("\nheaders are up to date")
        return 0

    if args.print_only:
        for path, text in outputs.items():
            print(f"\n===== {path} =====")
            print(text, end="")
        return 0

    if args.verify:
        return verify_mode(directory, reports, args)

    for path, text in outputs.items():
        original = path.read_text(encoding="utf-8")
        if original == text:
            continue
        path.write_text(text, encoding="utf-8", newline="")
        print(f"wrote {path}")
    return 0


def verify_mode(directory: Path, reports: list[Conversion], args) -> int:
    """Download the live payload and check every literal in the headers."""
    urls = {
        "Offset": args.base_url + "offsets.json",
        "Button": args.base_url + "buttons.json",
        "Schema": args.base_url + "client_dll.json",
    }
    payloads: dict[str, dict] = {}
    for category, url in urls.items():
        try:
            payloads[category] = fetch_json(url, args.timeout)
        except Exception as exc:  # noqa: BLE001 - report, do not traceback
            print(f"error: cannot fetch {url}: {exc}", file=sys.stderr)
            return 2
        print(f"fetched {url}")

    total_ok = True
    for report in reports:
        path = directory / report.filename
        category = TARGETS[report.filename][0]
        result = verify_file(path, category, TARGETS[report.filename][1], payloads)
        status = "ok" if result.ok else "MISMATCH"
        print(f"{path.name}: {result.checked} literals checked, {status}")
        for entry in result.missing:
            total_ok = False
            print(f"    missing   {entry}")
        for entry, local, upstream in result.mismatched:
            total_ok = False
            print(f"    mismatch  {entry}: header has {local}, upstream has {upstream}")
        if result.unparsed:
            total_ok = False
            print(f"    {result.unparsed} literal(s) could not be checked")

    if not total_ok:
        print("\nheaders do NOT match the live cs2-dumper payload")
        return 1
    print("\nevery literal matches the live cs2-dumper payload")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
