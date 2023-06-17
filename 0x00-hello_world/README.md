# 0x00-hello_world

First project from many to come, containing 6 mandatory tasks and 2 advanced tasks.

## Table of Contents

- [Tasks](#tasks)
    - [Task 0: Preprocessor](#task-0-preprocessor)
    - [Task 1: Compiler](#task-1-compiler)
    - [Task 2: Assembler](#task-2-assembler)
    - [Task 3: Name](#task-3-name)
    - [Task 4: Hello, puts](#task-4-hello-puts)
    - [Task 5: Hello, printf](#task-5-hello-printf)
    - [Task 6: Size is not grandeur, and territory does not make a nation](#task-6-size-is-not-grandeur-and-territory-does-not-make-a-nation)
    - [Task 7: Intel (Advanced)](#task-7-intel-advanced)
    - [Task 8: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (Advanced)](#task-8-unix-is-basically-a-simple-operating-system-but-you-have-to-be-a-genius-to-understand-the-simplicity-advanced)

## Tasks

### Task 0: Preprocessor (mandatory)

Write a script that runs a C file through the preprocessor and saves the result into another file.

- The C file name will be saved in the variable $CFILE.
- The output should be saved in the file "c".

### Task 1: Compiler (mandatory)

Write a script that compiles a C file but does not link.

- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension ".o" instead of ".c".
  Example: if the C file is "main.c", the output file should be "main.o".

### Task 2: Assembler (mandatory)

Write a script that generates the assembly code of a C code and saves it in an output file.

- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension ".s" instead of ".c".
  Example: if the C file is "main.c", the output file should be "main.s".

### Task 3: Name (mandatory)

Write a script that compiles a C file and creates an executable named "cisfun".

- The C file name will be saved in the variable $CFILE.

### Task 4: Hello, puts (mandatory)

Write a C program that prints exactly "Programming is like building a multilingual puzzle", followed by a new line.

- Use the function puts.
- You are not allowed to use printf.
- Your program should end with the value 0.

### Task 5: Hello, printf (mandatory)

Write a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line.

- Use the function printf.
- You are not allowed to use the function puts.
- Your program should return 0.
- Your program should compile without warnings when using the -Wall gcc option.

### Task 6: Size is not grandeur, and territory does not make a nation (mandatory)

Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example.
- Warnings are allowed.
- Your program should return 0.
- You might have to install the package "libc6-dev-i386" on your Linux to test the -m32 gcc option.

### Task 7: Intel (Advanced)

Write a script that generates the assembly code (Intel syntax) of a C code and saves it in an output file.

- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension ".s" instead of ".c".
  Example: if the C file is "main.c", the output file should be "main.s".

### Task 8: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (Advanced)

Write a C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19", followed by a new line, to the standard error.

- You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts.
- Your program should return 1.
- Your program should compile without any warnings when using the -Wall gcc option.

