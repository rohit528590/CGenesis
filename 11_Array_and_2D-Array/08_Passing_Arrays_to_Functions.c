/**
 * ============================================================================
 * TOPIC: Arrays as Function Parameters
 * ============================================================================
 *
 * LEARNING OBJECTIVES:
 * - Understand how arrays are passed to functions
 * - Learn the difference between pass-by-value and pass-by-reference
 * - Master array parameter syntax
 * - Understand why arrays behave differently than regular variables
 *
 * ============================================================================
 */

#include <stdio.h>

/**
 * CRITICAL CONCEPT: How Arrays Are Passed
 * ----------------------------------------
 * When you pass an array to a function:
 * ✓ Only the memory address (pointer) is passed, NOT a copy
 * ✓ This is called "pass-by-reference" behavior
 * ✓ Changes inside the function affect the original array
 * ✓ Much more efficient than copying entire array
 *
 * In contrast, regular variables (int, float) are passed by value:
 * - A copy is made
 * - Changes don't affect the original
 */

/* ----------------------------------------------------------------
 * Function 1: Display Array (Read-Only)
 * ----------------------------------------------------------------
 */
void displayArray(int arr[], int size)
{
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* ----------------------------------------------------------------
 * Function 2: Modify Array (Pass-by-Reference)
 * ----------------------------------------------------------------
 */
void doubleArrayElements(int arr[], int size)
{
    printf("\nInside doubleArrayElements function:\n");
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2; // Modifies original array!
        printf("  arr[%d] = %d\n", i, arr[i]);
    }
}

/* ----------------------------------------------------------------
 * Function 3: Modify Regular Variable (Pass-by-Value)
 * ----------------------------------------------------------------
 */
void modifyValue(int x)
{
    printf("\nInside modifyValue function:\n");
    x = 100; // Only modifies local copy, NOT original
    printf("  x = %d (local copy)\n", x);
}

/* ----------------------------------------------------------------
 * Function 6: Reverse Array In-Place
 * ----------------------------------------------------------------
 */
void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        // Swap elements from both ends
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

/* ----------------------------------------------------------------
 * MAIN FUNCTION: Demonstration
 * ----------------------------------------------------------------
 */
int main()
{
    printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║  ARRAYS IN FUNCTIONS: Pass-by-Reference vs Value      ║\n");
    printf("╚════════════════════════════════════════════════════════╝\n\n");

    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int value = 50;

    /* ----------------------------------------------------------------
     * DEMONSTRATION 1: Array Pass-by-Reference
     * ----------------------------------------------------------------
     */
    printf("=== DEMONSTRATION 1: Array Modification ===\n");
    printf("Original array: ");
    displayArray(numbers, size);

    doubleArrayElements(numbers, size); // Modifies original array

    printf("\nAfter doubleArrayElements():\n");
    printf("Array in main: ");
    displayArray(numbers, size); // Array is changed!

    printf("\n🔍 OBSERVATION: Array was modified because arrays are ");
    printf("passed by reference.\n");

    /* ----------------------------------------------------------------
     * DEMONSTRATION 2: Regular Variable Pass-by-Value
     * ----------------------------------------------------------------
     */
    printf("\n\n=== DEMONSTRATION 2: Regular Variable ===\n");
    printf("Original value: %d\n", value);

    modifyValue(value); // Does NOT modify original

    printf("\nAfter modifyValue():\n");
    printf("Value in main: %d (unchanged)\n", value);

    printf("\n🔍 OBSERVATION: Regular variables are passed by value, ");
    printf("so changes don't affect the original.\n");

    /* ----------------------------------------------------------------
     * DEMONSTRATION 3: Array Functions (Practical Use)
     * ----------------------------------------------------------------
     */
    printf("\n\n=== DEMONSTRATION 3: Array Operations ===\n");

    int data[] = {15, 42, 8, 23, 67, 31, 54};
    int dataSize = sizeof(data) / sizeof(data[0]);

    printf("Original data: ");
    displayArray(data, dataSize);

    printf("\nReversing array...\n");
    reverseArray(data, dataSize);
    printf("Reversed data: ");
    displayArray(data, dataSize);

    /**
     * IMPORTANT SYNTAX VARIATIONS:
     * ----------------------------
     * All these are equivalent for function parameters:
     *
     * void func(int arr[], int size)      ← Most common
     * void func(int arr[10], int size)    ← Size ignored by compiler
     * void func(int *arr, int size)       ← Explicit pointer notation
     *
     * BEST PRACTICES:
     * ---------------
     * ✓ Always pass array size as a separate parameter
     * ✓ Use const for read-only arrays: void func(const int arr[], int size)
     * ✓ Document whether function modifies the array
     * ✓ Validate size parameter to prevent buffer overflow
     *
     * COMMON PITFALLS:
     * ----------------
     * ❌ Forgetting to pass size parameter
     * ❌ Using sizeof(arr) inside function (gives pointer size, not array size)
     * ❌ Returning local arrays (undefined behavior)
     * ❌ Not checking for NULL pointers in production code
     */

    return 0;
}