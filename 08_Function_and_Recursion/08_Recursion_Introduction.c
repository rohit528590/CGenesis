#include <stdio.h>

/*
================================================================================
                        INTRODUCTION TO RECURSION
================================================================================

What is Recursion?
------------------
Recursion is a programming technique where a function calls itself directly
in order to solve a problem. It breaks down complex problems into simpler,
smaller sub-problems.

Key Components of Recursion:
-----------------------------
1. BASE CASE: The condition that stops recursion (prevents infinite calls)
2. RECURSIVE CASE: The part where function calls itself with modified arguments
3. PROGRESS: Each recursive call must move toward the base case

Basic Structure:
----------------
return_type function_name(parameters)
{
    if (base_condition)
    {
        return base_value;     // BASE CASE - stops recursion
    } 
    else
    {
        return function_name(modified_parameters);  // RECURSIVE CASE
    }
}

How Recursion Works:
--------------------
1. Function is called with initial arguments
2. If base case is met, return immediately
3. Otherwise, make recursive call with simpler/smaller arguments
4. Each call waits for the recursive call to return
5. Results "bubble up" from base case to original call

When to Use Recursion:
----------------------
✓ Problems naturally defined recursively (factorials, fibonacci)
✓ Tree or graph traversal
✓ Divide-and-conquer algorithms
✓ Mathematical sequences

When NOT to Use Recursion:
---------------------------
✗ Simple iterative problems (use loops instead)
✗ When memory is limited (recursion uses more stack space)
✗ When performance is critical (iteration is often faster)

================================================================================
*/

// Example 1: Factorial using recursion
// factorial(n) = n * factorial(n-1)
// factorial(0) = 1  (base case)
int factorial(int n)
{
    // BASE CASE: Stop when n reaches 0 or 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // RECURSIVE CASE: n! = n * (n-1)!
    else
    {
        return n * factorial(n - 1);
    }
}

// Example 2: Sum of first n natural numbers
// sum(n) = n + sum(n-1)
// sum(0) = 0  (base case)
int sumNatural(int n)
{
    // BASE CASE
    if (n == 0)
    {
        return 0;
    }
    // RECURSIVE CASE
    return n + sumNatural(n - 1);
}

// Example 3: Power function (x^n)
// power(x, n) = x * power(x, n-1)
// power(x, 0) = 1  (base case)
int power(int base, int exponent)
{
    // BASE CASE
    if (exponent == 0)
    {
        return 1;
    }
    // RECURSIVE CASE
    return base * power(base, exponent - 1);
}

// Example 4: Countdown using recursion
void countdown(int n)
{
    // BASE CASE
    if (n == 0)
    {
        printf("Blast off!\n");
        return;
    }
    // RECURSIVE CASE
    printf("%d... ", n);
    countdown(n - 1);
}

// Example 5: Print numbers from 1 to n
void printNumbers(int current, int n)
{
    // BASE CASE
    if (current > n)
    {
        return;
    }
    // RECURSIVE CASE
    printf("%d ", current);
    printNumbers(current + 1, n);
}

int main()
{
    printf("=== Recursion Demonstration ===\n\n");

    // Example 1: Factorial
    printf("1. Factorial Calculation:\n");
    int num = 5;
    printf("   factorial(%d) = %d\n", num, factorial(num));
    printf("   How it works: %d! = 5×4×3×2×1 = %d\n\n", num, factorial(num));

    // Trace factorial(5)
    printf("   Recursive trace for factorial(5):\n");
    printf("   factorial(5) = 5 * factorial(4)\n");
    printf("   factorial(4) = 4 * factorial(3)\n");
    printf("   factorial(3) = 3 * factorial(2)\n");
    printf("   factorial(2) = 2 * factorial(1)\n");
    printf("   factorial(1) = 1  [BASE CASE]\n");
    printf("   Results return: 1 → 2 → 6 → 24 → 120\n\n");

    // Example 2: Sum of natural numbers
    printf("2. Sum of Natural Numbers:\n");
    printf("   sum(5) = %d\n", sumNatural(5));
    printf("   (1 + 2 + 3 + 4 + 5)\n\n");

    // Example 3: Power function
    printf("3. Power Calculation:\n");
    printf("   2^4 = %d\n\n", power(2, 4));

    // Example 4: Countdown
    printf("4. Recursive Countdown:\n   ");
    countdown(5);
    printf("\n");

    // Example 5: Print sequence
    printf("5. Print Numbers 1 to 10:\n   ");
    printNumbers(1, 10);
    printf("\n");

    return 0;
}

/*
================================================================================
                        RECURSION VS ITERATION
================================================================================

Factorial - Iterative Approach:
--------------------------------
int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

Comparison:
-----------
Recursion:                          Iteration:
+ More elegant and readable         + More efficient (less overhead)
+ Natural for certain problems      + Uses less memory
- Uses more memory (stack)          - Can be less intuitive
- Slower (function call overhead)   + Faster execution

================================================================================
*/
