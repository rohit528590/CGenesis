#include <stdio.h>
// Function to print a message for England
void england()
{
    printf(" You are in England.\n");
    return; // Exits.
}

// Function to print a message for Australia and call england()
void australia()
{
    printf(" You are in Australia.\n");
    england(); // Valid because of the earlier declaration
    return;    // Each function returns back to its caller and then exits.
}

// Function to print a message for India and call australia()
void india()
{
    printf(" You are in India.\n");
    australia(); // Valid because of the earlier declaration
    return;      // Each function returns back to its caller and then exits.
}

int main() // Execution always starts with main()
{
    india(); // Calls india(), which starts the chain of function calls
    return 0;
}
/* Note-: 
This example demonstrates the flow of control in a C program using multiple function calls
    Then control returns step-by-step back to main().
    A function must be declared before it is called.
    Also you can avoid earlier declaration of functions before it is called by using prototype function.
*/
