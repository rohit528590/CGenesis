/**
 * ============================================================================
 * FILE: 04_Practice_Basic_Arrays.c
 * TOPIC: Hands-On Exercises for 1D Arrays
 * ============================================================================
 *
 * This file contains progressive exercises to reinforce array concepts.
 * Uncomment each exercise section to practice.
 *
 * ============================================================================
 */

#include <stdio.h>

/* ========================================================================
 * EXERCISE 1: Basic Array Declaration and Display
 * ========================================================================
 * TASK: Declare an array with values {2, 4, 6, 8, 10} and display them.
 */
void exercise1()
{
    printf("\n=== EXERCISE 1: Basic Array ===\n");

    // YOUR CODE HERE
    int numbers[5] = {2, 4, 6, 8, 10};

    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

/* ========================================================================
 * EXERCISE 2: User Input Array
 * ========================================================================
 * TASK: Create an array of size 7, take input from user, and display it.
 */
void exercise2()
{
    printf("\n=== EXERCISE 2: User Input Array ===\n");

    int arr[7];

    printf("Enter 7 numbers:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* ========================================================================
 * EXERCISE 3: Dynamic Size Array
 * ========================================================================
 * TASK: Ask user for array size, take input, and calculate sum.
 */
void exercise3()
{
    printf("\n=== EXERCISE 3: Dynamic Size Array ===\n");

    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    // Variable Length Array (VLA) - C99 feature
    int arr[size];
    int sum = 0;

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Accumulate sum
    }

    printf("\nSum of all elements: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / size);
}

/* ========================================================================
 * CHALLENGE: Count Even and Odd Numbers
 * ========================================================================
 * TASK: Count how many even and odd numbers are in the array.
 */
void challenge()
{
    printf("\n=== CHALLENGE: Count Even and Odd ===\n");

    int arr[10] = {15, 22, 8, 13, 45, 30, 67, 12, 89, 44};
    int size = 10;
    int evenCount = 0, oddCount = 0;

    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
}

/* ========================================================================
 * MAIN FUNCTION - Uncomment exercises to practice
 * ========================================================================
 */
int main()
{
    printf("╔════════════════════════════════════════════════╗\n");
    printf("║     1D ARRAY PRACTICE EXERCISES                ║\n");
    printf("╚════════════════════════════════════════════════╝\n");

    exercise1();
    exercise2();
    exercise3();
    challenge();

    return 0;
}

/**
 * ============================================================================
 * LEARNING TIPS:
 * --------------
 * 1. Start with Exercise 1 and progress sequentially
 * 2. Try to solve each exercise before looking at the solution
 * 3. Modify the exercises to create your own variations
 * 4. Test edge cases (empty arrays, single elements, etc.)
 * 5. Use debugging techniques (print statements) to trace execution
 *
 * COMMON MISTAKES TO WATCH FOR:
 * ------------------------------
 * ❌ Off-by-one errors in loop conditions
 * ❌ Forgetting to initialize variables (sum, count, etc.)
 * ❌ Array index out of bounds
 * ❌ Not using & with scanf for array elements
 * ❌ Comparing arrays with == (doesn't work as expected)
 * ============================================================================
 */
