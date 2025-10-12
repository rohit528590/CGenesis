#include <stdio.h>

/*
================================================================================
                        NON-VOID (RETURN) FUNCTIONS
================================================================================

What is a Non-Void Function?
----------------------------
A non-void function returns a value of a specific data type (int, float,
double, char, etc.) to the caller. These functions are used when you need
to calculate and return a result.

Key Characteristics:
--------------------
1. Has a specific return type (int, float, char, double, etc.)
2. Must include a return statement with a value
3. Can be used in expressions and assignments
4. Returns exactly one value to the caller

Syntax:
-------
return_type function_name(parameters)
{
    // Code to execute
    return value;  // value must match return_type
}

Common Return Types:
--------------------
- int : Returns integer values
- float : Returns single-precision decimal numbers
- double : Returns double-precision decimal numbers
- char : Returns a single character

================================================================================
*/

// Returns the sum of two integers
int add(int a, int b)
{
    return a + b;
}

// Returns the average of two floating-point numbers
float average(float num1, float num2)
{
    return (num1 + num2) / 2.0;
}

// Returns the larger of two integers
int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// Returns the square of a number
int square(int n)
{
    return n * n;
}

// Returns 1 if even, 0 if odd
int isEven(int num)
{
    return (num % 2 == 0);
}

// Returns the factorial iteratively
int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// Returns the area of a circle
double circleArea(double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main()
{
    printf("=== Return Functions Demonstration ===\n\n");

    // Using return values in assignments
    int sum = add(15, 25);
    printf("15 + 25 = %d\n", sum);

    // Using return values directly
    printf("Average of 8.5 and 6.3 = %.2f\n\n", average(8.5, 6.3));

    // Using in expressions
    int result = add(5, 3) * square(2);
    printf("(5 + 3) * (2²) = %d\n\n", result);

    // Using in conditionals
    if (isEven(24))
    {
        printf("24 is even\n");
    }

    printf("Maximum of 42 and 58 : %d\n", maximum(42, 58));
    printf("Factorial of 5 = %d\n", factorial(5));
    printf("Circle area (r=7.5) = %.2f\n", circleArea(7.5));

    return 0;
}