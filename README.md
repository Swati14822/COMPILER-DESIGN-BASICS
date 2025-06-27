# COMPILER-DESIGN-BASICS

*COMPANY* : CODTECH IT SOLUTIONS

*NAME* : SWATI KUMARI

*INTERN ID* : CTO4DF966

*DOMAIN* : C++ PROGRAMMING

*DURATION* : 4 WEEKS

*MENTOR* : NEELA SANTOSH

Project Report: Simple Arithmetic Expression Compiler in C++

Internship Title: Compiler Design – Basics

1. Project Overview

The goal of this project is to implement a basic compiler that parses and evaluates arithmetic expressions using C++. The focus is on demonstrating the principles of expression parsing, operator precedence, and evaluation order as taught in the fundamentals of compiler design.

2. Objective

To implement a parser for arithmetic expressions.

To evaluate expressions using stacks for operators and operands.

To handle operator precedence and parentheses.

To manage error handling for invalid expressions.

3. Technologies Used

Programming Language: C++

Compiler: MinGW (GCC)

IDE: Code::Blocks 25.03

4. Program Features

Accepts arithmetic expressions from user input.

Supports basic operators: +, -, *, /.

Supports nested parentheses (), and respects order of operations.

Uses stacks for evaluation, simulating a simple compiler/interpreter.

Displays the evaluated result or appropriate error messages.

5. Sample Input/Output

Input:

5+2-1

Output:

Result = 6

6. How It Works

The expression is parsed character by character.

Numbers are pushed to a value stack.

Operators are pushed to an operator stack.

On encountering ), the operator stack is popped to apply operations.

Precedence rules ensure correct order of operations.

The result is printed at the end.

7. Limitations

Only integer evaluation (no decimals).

No variable assignment or advanced syntax.

No function parsing (e.g., sin, cos).

8. Future Enhancements

Add support for floating-point numbers.

Support variables and function calls.

Add a lexer/parser generator (like Flex/Bison).

Handle syntax errors more gracefully.

9. Conclusion

This project serves as a strong introduction to compiler design principles, specifically parsing and evaluation of arithmetic expressions. It demonstrates an understanding of data structures, algorithmic control flow, and practical compiler internals.

*OUTPUT*

![Image](https://github.com/user-attachments/assets/ec44e17b-98b9-4a94-8358-4af58f1cbcc4)

