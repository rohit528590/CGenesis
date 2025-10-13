#include <stdio.h>

/*
================================================================================
                    PASS BY VALUE AND VARIABLE SCOPE
================================================================================

What is Pass by Value?
-----------------------
In C, when you pass variables to a function, the function receives COPIES of
the argument values, not the original variables themselves. This mechanism is
called "pass by value."

Key Concept:
------------
"Functions get copies of parameters — they do not change the actual values
of variables in the calling function."

How It Works:
-------------
1. When a function is called with arguments, C creates copies of those values
2. The function works with these copies (local parameters)
3. Any modifications to parameters inside the function affect only the copies
4. The original variables in the calling function remain unchanged

Implications:
-------------
✓ Safe: Original data is protected from accidental modification
✓ Predictable: Functions don't have side effects on caller's variables
✗ Limited: Can't modify original variables directly (need pointers for that)

================================================================================
*/

// Function that attempts to modify its parameter
void modifyValue(int x)
{
    printf("  Inside modifyValue - Before: x = %d\n", x);
    x = x + 10; // Modifies only the COPY of the variable
    printf("  Inside modifyValue - After:  x = %d\n", x);
}

// Function demonstrating multiple parameters
void swapAttempt(int a, int b)
{
    printf("  Inside swapAttempt - Before swap: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("  Inside swapAttempt - After swap:  a = %d, b = %d\n", a, b);
}

// Function that returns a modified value (proper approach)
int addTen(int num)
{
    return num + 10; // Returns new value instead of modifying parameter
}

int main()
{
    printf("=== Pass by Value Demonstration ===\n\n");

    // Example 1: Simple modification attempt
    printf("Example 1: Attempting to modify a variable\n");
    int original = 5;
    printf("Before function call: original = %d\n", original);
    modifyValue(original);
    printf("After function call:  original = %d\n", original);
    printf("→ Original variable UNCHANGED!\n\n");

    // Example 2: Swap attempt
    printf("Example 2: Attempting to swap two variables\n");
    int num1 = 20, num2 = 30;
    printf("Before function call: num1 = %d, num2 = %d\n", num1, num2);
    swapAttempt(num1, num2);
    printf("After function call:  num1 = %d, num2 = %d\n", num1, num2);
    printf("→ Original variables UNCHANGED!\n\n");

    // Example 3: Correct approach using return value
    printf("Example 3: Correct way to modify values\n");
    int value = 15;
    printf("Before: value = %d\n", value);
    value = addTen(value); // Assign the returned value
    printf("After:  value = %d\n", value);
    printf("→ Value updated by assignment!\n");

    return 0;
}

/*
================================================================================
                              KEY TAKEAWAYS
================================================================================

1. Pass by value creates copies of arguments
2. Functions cannot modify the original variables directly
3. To "modify" a value, use return statements and reassignment
4. For actual modification of originals, pointers are needed (advanced topic)

================================================================================
*/