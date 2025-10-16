/**
 * ============================================================================
 * FILE: 10_Practice_Functions_with_Arrays.c
 * TOPIC: Advanced Exercises - Arrays and Functions
 * ============================================================================
 *
 * Challenging exercises combining arrays and functions.
 * Test your understanding of concepts learned.
 *
 * ============================================================================
 */

#include <stdio.h>

/* ========================================================================
 * EXERCISE 1: Generate Multiples
 * ========================================================================
 * TASK: Function to fill array with formula-based values
 * Formula: arr[i] = 5 * i + 1
 */
void generateMultiples(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 5 * i + 1;
    }
}

void exercise1()
{
    printf("\n=== EXERCISE 1: Generate Multiples ===\n");
    printf("Formula: arr[i] = 5 * i + 1\n\n");

    int size = 10;
    int arr[size];

    generateMultiples(arr, size);

    printf("Generated array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Expected: 1 6 11 16 21 26 31 36 41 46
}

/* ========================================================================
 * EXERCISE 2: Find Second Largest
 * ========================================================================
 * TASK: Function to find the second largest element
 */
int findSecondLargest(int arr[], int size)
{
    int largest = arr[0];
    int secondLargest = -1;

    // Find largest
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

void exercise2()
{
    printf("\n=== EXERCISE 2: Second Largest Element ===\n");

    int arr[] = {45, 23, 67, 89, 12, 78, 34, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int secondMax = findSecondLargest(arr, size);
    printf("Second largest: %d\n", secondMax);
}

/* ========================================================================
 * EXERCISE 5: Check Palindrome Array
 * ========================================================================
 * TASK: Function to check if array reads same forwards and backwards
 */
int isPalindromeArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

void exercise5()
{
    printf("\n=== EXERCISE 5: Palindrome Array ===\n");

    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {1, 2, 3, 4, 5};

    printf("Array 1: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr1[i]);
    printf("→ %s\n", isPalindromeArray(arr1, 5) ? "Palindrome" : "Not Palindrome");

    printf("Array 2: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr2[i]);
    printf("→ %s\n", isPalindromeArray(arr2, 5) ? "Palindrome" : "Not Palindrome");
}

/* ========================================================================
 * MAIN FUNCTION
 * ========================================================================
 */
int main()
{
    printf("╔═══════════════════════════════════════════════════════════╗\n");
    printf("║   ADVANCED ARRAY & FUNCTION EXERCISES                    ║\n");
    printf("╚═══════════════════════════════════════════════════════════╝\n");

    exercise1();
    exercise2();
    exercise5();

    return 0;
}