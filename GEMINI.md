# GEMINI.md

This is the instructional context for the Prism Launcher project.

## Project Overview
Prism Launcher is a custom Minecraft launcher (fork of MultiMC) that allows users to manage multiple installations of Minecraft, including different versions, modpacks, and configurations. It is a cross-platform C++ application using the Qt framework.

## Building and Running
The project uses CMake as its build system. For detailed instructions, refer to the [official build instructions](https://TigerLauncher.org/wiki/development/build-instructions).

- **Core build system:** CMake
- **Configuration:** `CMakeLists.txt`
- **Dependencies:** Managed via `vcpkg` (`vcpkg.json`).

*TODO: Document standard local build commands (e.g., `mkdir build && cd build && cmake .. && make`).*

## Development Conventions
- **Language:** C++
- **Framework:** Qt
- **License:** GPL-3.0-only
- **Forking/Distribution:** If creating custom builds, it is mandatory to either remove the internal API keys in `CMakeLists.txt` or provide your own to comply with the terms of service of various APIs (Microsoft, CurseForge).
- **Style:** Follow the project's existing `.clang-format` and `.clang-tidy` configurations.

## Key Directories
- `launcher/`: Main source code.
- `libraries/`: Third-party or internal shared libraries.
- `program_info/`: Assets (logos, icons) and metadata.
- `cmake/`: Custom CMake modules and build helper scripts.
- `tests/`: Project test suite.
