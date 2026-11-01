# OOP Calculator (C++)

A menu-driven command-line calculator built for COMP 3141 (Object-Oriented Design and Programming) at Thompson Rivers University.

It has two modes:
- **Basic calculator**: add, subtract, multiply, divide, square, square root
- **Scientific calculator**: trig and inverse trig, hyperbolic, exponent and log functions, powers, square and cube roots

## Design
- `Calculator` is the base class. It holds the operands as protected members, with accessors and mutators.
- `ScientificCalculator` inherits from `Calculator` and overrides the virtual `calculate()` menu (runtime polymorphism).
- `UserInterface` owns one of each calculator and handles all menus and input, so the maths stays in the calculator classes.
- Input validation and error handling for things like divide-by-zero and square roots of negative numbers.

## Build and run
```bash
g++ -std=c++17 *.cpp -o calculator
./calculator
```
On Windows you can also add the files to a Visual Studio C++ console project.
# OOPS-calculator
