#include <stdio.h>

/*
================================================================================
                            VOID FUNCTIONS
================================================================================

What is a Void Function?
-------------------------
A void function is a function that does NOT return any value to the caller.
It is used to perform actions such as printing output, modifying global
variables, or executing procedures.

Key Characteristics:
--------------------
1. Return type is declared as 'void'
2. Does not use a return statement (or uses 'return;' without a value)
3. Cannot be used in expressions or assignments
4. Primary purpose is to perform an action, not calculate a value

Syntax:
-------
void function_name(parameters)
{
    // Code to execute
    // No return value
}

When to Use Void Functions:
----------------------------
- Displaying output to the user
- Performing calculations without returning results
- Modifying data structures
- Initializing or resetting values
- Executing a series of statements

Important Note:
---------------
You CANNOT assign the result of a void function to a variable.
❌ int x = printMessage();  // ERROR: void function returns nothing
✅ printMessage();           // CORRECT: just call the function

================================================================================
*/

// Void function: Displays a welcome message
void displayWelcome()
{
    printf("╔════════════════════════════════════╗\n");
    printf("║   Welcome to C Programming!        ║\n");
    printf("║   Learning Void Functions          ║\n");
    printf("╚════════════════════════════════════╝\n\n");
}

// Void function with parameters: Prints a customized greeting
void greetUser(char name[])
{
    printf("Hello, %s! Hope you're having a great day.\n", name);
}

// Void function: Displays a separator line
void printSeparator()
{
    printf("----------------------------------------\n");
}

// Void function with multiple parameters: Displays user information
void displayInfo(char name[], int age, char city[])
{
    printf("User Profile :\n");
    printf("  Name : %s\n", name);
    printf("  Age : %d years\n", age);
    printf("  City : %s\n", city);
}

// Void function: Demonstrates multiple actions
void printMultiplicationTable(int number)
{
    printf("Multiplication Table of %d:\n", number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main()
{
    printf("=== Void Functions Demonstration ===\n\n");

    // Calling void functions
    displayWelcome();

    greetUser("Rohit");
    greetUser("Anjali");

    printSeparator();

    displayInfo("Priya", 22, "Mumbai");

    printf("\n");
    printSeparator();
    printf("\n");

    printMultiplicationTable(5);

    return 0;
}