# Aly – A Language for You

![Language](https://img.shields.io/badge/Language-C-blue)
![License](https://img.shields.io/badge/License-MIT-blue)
![Platform](https://img.shields.io/badge/Platform-Windows%20|%20Linux-blue)
![Arch](https://img.shields.io/badge/Arch-x86--64%20|%20x64-green)

![AlyCompiler Logo](/Resources/LOGO.png)

Aly is a statically typed, whitespace-agnostic programming language designed for simplicity, clarity, and accessibility. Whether you're a new developer or an experienced systems programmer, Aly aims to offer a clean and intuitive experience without sacrificing power or control.

Aly is built entirely from scratch in C, using CMake as the build system and GCC as the target backend for compilation. There are no external dependencies or third-party libraries — every component of the toolchain is handcrafted for clarity and educational value.

## Project Highlights
------------------

- **Statically Typed**: Ensures type safety and clear intent in code.
- **Whitespace-Agnostic**: Aly doesn’t enforce indentation or formatting rules.
- **Minimal Syntax**: Inspired by simplicity and ease-of-use.
- **Pure C Implementation**: No dependencies; just clean, native C code.
- **Assembler Backend**: Code is emitted in AT&T-style x86_64 assembly, designed for use with GCC.
- **Build System**: Uses CMake for flexibility and cross-platform compatibility.
- **Transpilation Goals**: Long-term goal includes the ability to transpile Aly to C for even broader support and learning opportunities.

## Usage

Run the executable from a shell with a path to some source code as the only argument. Currently, we print out the furthest progress we are able to make. Eventually, we will output compiled source code.

## Dependencies

- **CMake**: [CMake](https://cmake.org/download/)
- **Compiler**: Any C Compiler, Aly uses [GCC](https://gcc.gnu.org/install/download.html)

## Building

NOTE: Shell commands shown assume a working directory of this repository.

### Generate Build Tree

First, generate a build tree using CMake.

```sh
cmake -B bld
```

### Build the Executable

Finally, build an executable from the build tree.

```sh
cmake --build bld
```

Alternatively, you can use the provided scripts:

- Windows: `Scripts/Build.bat`
- Linux/macOS: `Scripts/Build.sh`

## Example Syntax
--------------

You can find a full example in [example](example.aly) Here's a small snippet:
```bash
a : integer = 0 ; Variable declaration
a := 0 ; Variable reassignment

defun foo (a:integer, b:integer):integer {
; Function body here
}
```

## Technology Stack
----------------

- **Language**: C (ISO C99)
- **Build System**: CMake
- **Compiler**: Any C Compiler
- **Target**: AT&T-style x86_64 assembly

## Development Goals
-----------------

- Create a clean, minimal language that's easy to learn and reason about
- Educate through transparency: no black boxes, no external libraries
- Provide full control over compilation and execution
- Eventually support both direct assembly output and transpilation to C

## Roadmap (In Progress)
---------------------

- [ ] Basic variable declaration and assignment
- [ ] Static type system
- [ ] Function definitions
- [ ] Control flow (if, while, for)
- [ ] Expression evaluation and type checking
- [ ] Code generation to x86_64 assembly (AT&T syntax)
- [ ] Standard library
- [ ] C transpilation target (experimental)

## Contribution
------------

Aly is open source and actively developed. Contributions are welcome — whether you're interested in working on the lexer, parser, code generation, testing infrastructure, or documentation.

To contribute, see [CONTRIBUTING.md](CONTRIBUTING.md) or open an issue to discuss new ideas.

## License
-------

Aly is released under the MIT License. See [LICENSE](LICENSE.md) for more details.
