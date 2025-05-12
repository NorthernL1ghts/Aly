# Aly TODO:

- [x] Lex source into tokens or some kind of a data structure.

- [ ] Parse tokens or something into AST -- Just a tree containing data about the program

- [ ] Compile AST into assembly, let's start with `x86_64?`. We could then also transpile into another language that then gets compiled, like C or something.


## Miscellaneous

- Unnamed Variable:
    - It would be cool if an assignment and/or variable declaration could have no identifier, and work on a singular unnamed variable in the environment.