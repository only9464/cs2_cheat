#!/usr/bin/env python3
"""Compile the project's Windows sources with the CI strict flags.

``Dockerfile`` builds the shipped binary inside a MinGW container and treats any
warning in a project-owned source as an error.  That container is not available
while editing ``generated/``, so this script repeats the same compilation on the
host: same source list, same flags, same include paths.  A header change that
would break the Docker build breaks here first.

Only ``-c`` (compile, no link) is performed -- this checks diagnostics, not the
final executable, which needs SDL2, ImGui, civetweb and the resource file.

Usage::

    python generated/tools/compile_strict.py
    python generated/tools/compile_strict.py --compiler /path/to/g++
    python generated/tools/compile_strict.py --keep-going

Exit code 0 means every listed source compiled with no warnings.
"""

from __future__ import annotations

import argparse
import shutil
import subprocess
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parents[3]
BUILD_DIR = REPO_ROOT / "build" / "strict"

#: Copied from the ``RUN set -eu`` step in Dockerfile.
SOURCES = [
    "external-cheat-base/src/features/esp.cpp",
    "external-cheat-base/src/features/aimbot.cpp",
    "external-cheat-base/src/features/local_radar/local_fixed_radar.cpp",
    "external-cheat-base/src/features/web_radar/public_relay_producer.cpp",
    "external-cheat-base/src/features/web_radar/web_radar_service.cpp",
    "external-cheat-base/src/main.cpp",
    "external-cheat-base/src/core/game/web_radar_json.cpp",
    "external-cheat-base/src/core/memory/memory.cpp",
    "external-cheat-base/src/core/renderer/sdl_renderer.cpp",
]

#: Copied from the same step, in the same order.
FLAGS = [
    "-std=c++20",
    "-pthread",
    "-O2",
    "-DNDEBUG",
    "-DUNICODE",
    "-D_UNICODE",
    "-DSDL_MAIN_HANDLED",
    "-DNO_SSL",
    "-DNO_CGI",
    "-DUSE_WEBSOCKET",
    "-DUSE_IPV6",
    "-D_WIN32_WINNT=0x0A00",
    # The interface strings are Chinese and the sources are UTF-8 with and
    # without a BOM. GCC would otherwise emit narrow literals in the host's
    # execution charset, so the compiled UI would differ from the source. The
    # input charset has to be stated explicitly whenever the execution charset
    # is: GCC refuses to guess it in that case.
    "-finput-charset=UTF-8",
    "-fexec-charset=UTF-8",
    "-Wall",
    "-Wextra",
    "-Wpedantic",
    "-Werror",
    "-Wno-unknown-pragmas",
    "-Iexternal-cheat-base/vendor/SDL2/include",
    "-Iexternal-cheat-base/vendor/imgui",
    "-Ivendor/civetweb/include",
    "-Iexternal-cheat-base/src",
    "-Iexternal-cheat-base/src/core",
    "-Iexternal-cheat-base/src/features",
    "-Iexternal-cheat-base/src/utils",
    "-Iexternal-cheat-base/generated",
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


def main(argv: list[str]) -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("--compiler", help="path to a g++-compatible compiler")
    parser.add_argument(
        "--keep-going",
        action="store_true",
        help="compile every source even after one fails",
    )
    args = parser.parse_args(argv)

    compiler = find_compiler(args.compiler)
    if compiler is None:
        print("error: no g++ found; pass --compiler", file=sys.stderr)
        return 2

    BUILD_DIR.mkdir(parents=True, exist_ok=True)
    print(f"compiler: {compiler}")
    print(f"flags:    {' '.join(FLAGS)}")

    failed: list[str] = []
    for index, source in enumerate(SOURCES, 1):
        target = BUILD_DIR / (Path(source).name + ".o")
        command = [
            compiler,
            *FLAGS,
            "-c",
            source,
            "-o",
            str(target),
        ]
        print(f"\n[{index}/{len(SOURCES)}] {source}", flush=True)
        # g++ echoes the offending source line, which may contain non-ASCII bytes;
        # decode defensively instead of letting the host code page raise.
        result = subprocess.run(
            command,
            cwd=REPO_ROOT,
            capture_output=True,
            text=True,
            encoding="utf-8",
            errors="replace",
        )
        if result.returncode != 0:
            failed.append(source)
            sys.stdout.write(result.stdout or "")
            sys.stderr.write(result.stderr or "")
            print(f"    FAILED (exit {result.returncode})", flush=True)
            if not args.keep_going:
                break
        else:
            print("    ok", flush=True)

    print()
    if failed:
        print(f"STRICT COMPILE FAILED for {len(failed)} source(s):")
        for source in failed:
            print(f"  {source}")
        return 1
    print(f"STRICT COMPILE PASSED ({len(SOURCES)} sources, no warnings)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
