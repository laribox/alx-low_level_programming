# 0x00-hello_world

🌟 First project from many to come, containing 6 mandatory tasks and 2 advanced tasks. ✨

## Table of Contents

- [Tasks](#tasks) 📝
  - [0. Preprocessor](#0-preprocessor) ✂️
  - [1. Compiler](#1-compiler) 🛠️
  - [2. Assembler](#2-assembler) 🔍
  - [3. Name](#3-name) 🏷️
  - [4. Hello, puts](#4-hello-puts) 🖨️
  - [5. Hello, printf](#5-hello-printf) 🖋️
  - [6. Size is not grandeur, and territory does not make a nation](#6-size-is-not-grandeur-and-territory-does-not-make-a-nation) 🌍
  - [7. Intel](#7-intel-advanced) 💡
  - [8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](#8-unix-is-basically-a-simple-operating-system-but-you-have-to-be-a-genius-to-understand-the-simplicity-advanced) 💡

## Tasks

### 0. Preprocessor ✂️

Write a script that runs a C file through the preprocessor and saves the result into another file.

The C file name will be saved in the variable `$CFILE`.
The output should be saved in the file `c`.

### 1. Compiler 🛠️

Write a script that compiles a C file but does not link.

The C file name will be saved in the variable `$CFILE`.
The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
Example: if the C file is `main.c`, the output file should be `main.o`.

### 2. Assembler 🔍

Write a script that generates the assembly code of a C code and saves it in an output file.

The C file name will be saved in the variable `$CFILE`.
The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
Example: if the C file is `main.c`, the output file should be `main.s`.

### 3. Name 🏷️

Write a script that compiles a C file and creates an executable named `cisfun`.

The C file name will be saved in the variable `$CFILE`.

### 4. Hello, puts 🖨️

Write a C program that prints exactly "Programming is like building a multilingual puzzle", followed by a new line.

Use the function `puts`.
You are not allowed to use `printf`.
Your program should end with the value `0`.

### 5. Hello, printf 🖋️

Write a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line.

Use the function `printf`.
You are not allowed to use the function `puts`.
Your program should return `0`.
Your program should compile without warnings when using the `-Wall` gcc option.

### 6. Size is not grandeur, and territory does not make a nation 🌍

Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example.
Warnings are allowed
