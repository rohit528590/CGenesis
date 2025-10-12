#include <stdio.h>

/*
================================================================================
                        FUNCTION PROTOTYPES (DECLARATIONS)
================================================================================

What is a Function Prototype?
------------------------------
A function prototype (also called function declaration) tells the compiler
about a function's name, return type, and parameters BEFORE the function is
actually defined or called.

Why Use Prototypes?
-------------------
1. Forward Declaration: Allows calling a function before its definition
2. Compiler Information: Helps the compiler check for correct usage
3. Code Organization: Enables flexible code structure
4. Error Prevention: Catches type mismatches early

Syntax:
-------
return_type function_name(parameter_types);

Important Rules:
----------------
- A function must be declared (or defined) before it is called
- Prototype declares the function; definition provides the implementation
- Parameter names in prototypes are optional (only types are required)
- Prototypes typically appear at the top of the file or in header files

Example Prototypes:
-------------------
void greet();                    // No parameters
int add(int, int);               // Parameter names omitted
float divide(float a, float b);  // Parameter names included (optional)

================================================================================
*/

// Function prototypes (declarations) - placed before main()
void greet();                        // Prototype for greet function
int add(int a, int b);               // Prototype for add function
void displayMessage(char message[]); // Prototype with parameter name

int main()
{
    printf("=== Function Prototype Demonstration ===\n\n");

    // Calling functions - valid because of prototypes above
    greet();

    int sum = add(25, 15);
    printf("Sum of 25 and 15 : %d\n\n", sum);

    displayMessage("Prototypes enable forward declarations!");

    return 0;
}

// Function definitions (implementations) - placed after main()
void greet()
{
    printf("Hello! This function was called before it was defined.\n");
    printf("This is possible because of the prototype declaration.\n\n");
}

int add(int a, int b)
{
    return a + b; // Returns the sum of two integers
}

void displayMessage(char message[])
{
    printf("Message : %s\n", message);
}

/*
================================================================================
                    ALTERNATIVE APPROACH (WITHOUT PROTOTYPES)
================================================================================

If you define functions BEFORE main(), prototypes are not needed:

void greet()
{
    printf("Hello!\n");
}

int main()
{
    greet();  // Valid because greet() is already defined above
    return 0;
}

However, using prototypes is considered better practice for:
- Better code organization
- Separating interface from implementation
- Creating header files for larger projects

================================================================================
*/
