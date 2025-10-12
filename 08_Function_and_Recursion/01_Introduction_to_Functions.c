#include <stdio.h>

/*
================================================================================
                    INTRODUCTION TO FUNCTIONS IN C
================================================================================

What is a Function?
-------------------
A function is a self-contained, reusable block of code designed to perform a
specific task. Functions help organize code, improve readability, and promote
code reuse.

Why Use Functions?
------------------
1. Code Reusability : Write once, use multiple times
2. Modularity : Break complex problems into smaller, manageable pieces
3. Maintainability : Easier to debug and update code
4. Readability : Makes code more organized and understandable

Function Syntax :
-----------------
return_type function_name(parameter_type parameter1, parameter_type parameter2, ...)
{
    // Function body - statements to execute
    return value;  // Optional, required only if return_type is not void
}

Function Components :
---------------------
1. Return Type : Data type of the value returned (int, float, char, void, etc.)
2. Function Name : Identifier used to call the function
3. Parameters : Input values passed to the function (optional)
4. Function Body : Code block that executes when function is called
5. Return Statement : Sends a value back to the caller (if return type is not void)

Calling a Function :
--------------------
function_name(argument1, argument2, ...);

Note: The main() function is the entry point of every C program.
      Program execution always begins from main().

================================================================================
*/

// Function definition: A simple function with no parameters
void greetUser()
{
    printf("Welcome to C Programming!\n");
    printf("Functions make your code modular and reusable.\n");
}

// Function with parameters : Displays a personalized greeting
void greetByName(char name[])
{
    printf("Hello, %s! Welcome to learning functions.\n", name);
}

int main() // The main function - program execution starts here
{

    printf("=== Function Demonstration ===\n\n");

    greetUser(); // Calling a function with no arguments

    printf("\n");

    // Calling a function with arguments
    greetByName("Rohit");
    greetByName("Priya");

    return 0; // Indicates successful program termination
}