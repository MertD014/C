/*
In C language, a file can be divided into 3 parts.

1. Preprocessors:
The preprocessor stage is the initial phase of C compilation.
It includes directives starting with #, such as #include, #define, etc.
Commonly used to include header files, perform conditional compilation, and define macros.

2. Global Declarations:
Global declarations include variables, functions, and other entities that are accessible throughout the entire program.
These declarations are outside of any function, usually placed after the preprocessor directives.

3. Main Function:
The main function is the entry point of a C program.
Execution begins from the main function.
It contains statements that define the program's logic.
*/

// Example for preprocessors:
#include <stdio.h>
#define MAX_SIZE 100


// Example for global declarations:
int globalVariable = 42;

// the main fuction:
int main() {
    printf("Hello, i am underwater");
    return 0;
}

/*
If you are able to answer the questions below you are done with this part.

Q1. What does a preprocessor used for?
Q2. What is a global variable?
Q3. In a C program where does the execution begin?

A1. Preprocessors are used mostly for adding libaries and defining macros. 
A2. A global variable is a variable that is accesible from anywhere in the program.
A3. Main fuction is the start of execution.
*/
