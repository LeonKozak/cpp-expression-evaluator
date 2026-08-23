# C++ Expression Evaluator

A numerical expression evaluator built in **C++** using object-oriented programming, abstract syntax trees and the **Visitor design pattern**.

The program represents mathematical expressions as a hierarchy of expression objects and evaluates them using a visitor.

## Features

* Addition
* Subtraction
* Multiplication
* Division
* Modulus
* Constant expressions
* Abstract syntax tree structure
* Inheritance and polymorphism
* Visitor design pattern
* Division/modulus by zero handling
* Test cases for each expression type

## Example

An expression such as:

```text
3 + 4 - 5
```

can be represented as an expression tree and evaluated programmatically.

The project uses an abstract `Exp` base class, a `BinaryExp` class for expressions with two operands, and individual classes such as `AddExp`, `SubExp`, `MulExp`, `DivExp` and `ModExp`.

Evaluation is handled through `NumVisitor`, which implements the Visitor interface.

## Project Structure

```text
├── Exp.h
├── BinaryExp.cpp / BinaryExp.h
├── ConstExp.cpp / ConstExp.h
├── AddExp.cpp / AddExp.h
├── SubExp.cpp / SubExp.h
├── MulExp.cpp / MulExp.h
├── DivExp.cpp / DivExp.h
├── ModExp.cpp / ModExp.h
├── Visitor.h
├── NumVisitor.cpp / NumVisitor.h
└── Test.cpp
```

## Running

Compile all `.cpp` files with a C++ compiler, for example:

```bash
g++ -std=c++17 *.cpp -o evaluator
```

Then run:

```bash
./evaluator
```

On Windows:

```bash
evaluator.exe
```

## Technologies

**C++ · Object-Oriented Programming · Abstract Syntax Trees · Inheritance · Polymorphism · Visitor Pattern**

## Background

Developed as part of university coursework focused on object-oriented design and software design patterns.
