#include <stdio.h>
#include <math.h> // Required for mathematical functions

/*
================================================================================
                          LIBRARY FUNCTIONS IN C
================================================================================

What are Library Functions?
----------------------------
Library functions are predefined (built-in) functions provided by the C
standard libraries. They are ready-to-use and perform common tasks, saving
developers time and effort.

Common Library Functions:
--------------------------
Standard I/O (<stdio.h>):
  - printf()  : Prints formatted output to screen
  - scanf()   : Reads formatted input from user
  - getchar() : Reads a single character
  - putchar() : Prints a single character

Math Library (<math.h>):
  - sqrt(x)     : Returns square root of x
  - pow(x, y)   : Returns x raised to power y
  - abs(x)      : Returns absolute value of x (integer)
  - fabs(x)     : Returns absolute value of x (floating-point)
  - ceil(x)     : Rounds up to nearest integer
  - floor(x)    : Rounds down to nearest integer
  - sin(x)      : Returns sine of x (in radians)
  - cos(x)      : Returns cosine of x
  - log(x)      : Returns natural logarithm of x

String Library (<string.h>):
  - strlen(str)        : Returns length of string
  - strcpy(dest, src)  : Copies string
  - strcat(dest, src)  : Concatenates strings
  - strcmp(s1, s2)     : Compares two strings

Why Use Library Functions?
---------------------------
1. Tested and Optimized: Reliable and efficient
2. Time-Saving: No need to reinvent the wheel
3. Standardized: Work consistently across platforms
4. Well-Documented: Easy to learn and use

================================================================================
*/

int main()
{
    printf("=== Library Functions Demonstration ===\n\n");

    // Variables for demonstration
    double number = 25.0;
    int base = 2, exponent = 5;
    int negativeNumber = -10;
    double decimalValue = 7.8;

    // Mathematical operations using library functions

    // Square root
    double root = sqrt(number);
    printf("Square root of %.2f = %.2f\n", number, root);

    // Power calculation
    double power = pow(base, exponent);
    printf("%d raised to power %d = %.0f\n", base, exponent, power);

    // Absolute value (integer)
    int absolute = abs(negativeNumber);
    printf("Absolute value of %d = %d\n", negativeNumber, absolute);

    // Ceiling and floor functions
    printf("\nRounding operations on %.1f:\n", decimalValue);
    printf("  ceil(%.1f) = %.0f  (rounds up)\n", decimalValue, ceil(decimalValue));
    printf("  floor(%.1f) = %.0f  (rounds down)\n", decimalValue, floor(decimalValue));

    // Trigonometric functions (angles in radians)
    double angle = 3.14159 / 4; // 45 degrees in radians
    printf("\nTrigonometric values at π/4 radians:\n");
    printf("  sin(π/4) = %.4f\n", sin(angle));
    printf("  cos(π/4) = %.4f\n", cos(angle));

    // Logarithm
    double logValue = log(2.718282); // natural log of e
    printf("\nNatural logarithm of e ≈ %.4f\n", logValue);

    // Practical example: Pythagorean theorem
    double sideA = 3.0, sideB = 4.0;
    double hypotenuse = sqrt(pow(sideA, 2) + pow(sideB, 2));
    printf("\nPythagorean Theorem:\n");
    printf("  If sides are %.0f and %.0f, hypotenuse = %.2f\n",
           sideA, sideB, hypotenuse);

    return 0;
}