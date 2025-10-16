/**
 * ============================================================================
 * TOPIC: Array Declaration and Initialization Methods
 * ============================================================================
 *
 * LEARNING OBJECTIVES:
 * - Master different ways to declare arrays
 * - Understand initialization techniques
 * - Learn about partial initialization and default values
 * - Understand compiler-deduced array sizes
 *
 * ============================================================================
 */

#include <stdio.h>

int main()
{
    printf("=== Array Declaration and Initialization Methods ===\n\n");

    /* ----------------------------------------------------------------
     * METHOD 1: Declaration Only (Uninitialized)
     * ----------------------------------------------------------------
     * Reserves memory but values are garbage (unpredictable)
     */
    printf("METHOD 1: Declaration Only\n");
    int arr1[5]; // Contains garbage values
    printf("Garbage values (unpredictable): ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n\n");

    /* ----------------------------------------------------------------
     * METHOD 2: Declaration + Manual Assignment
     * ----------------------------------------------------------------
     * Declare first, then assign values individually
     */
    printf("METHOD 2: Manual Assignment\n");
    int arr2[5];
    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;
    arr2[3] = 40;
    arr2[4] = 50;
    printf("Manually assigned: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");

    /* ----------------------------------------------------------------
     * METHOD 3: Declaration + Initialization (Complete)
     * ----------------------------------------------------------------
     * Initialize all elements at declaration time
     */
    printf("METHOD 3: Complete Initialization\n");
    int arr3[5] = {10, 20, 30, 40, 50};
    printf("Fully initialized: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n\n");

    /* ----------------------------------------------------------------
     * METHOD 4: Partial Initialization
     * ----------------------------------------------------------------
     * Remaining elements are automatically set to 0
     */
    printf("METHOD 4: Partial Initialization\n");
    int arr4[5] = {1, 2}; // arr4[0]=1, arr4[1]=2, rest are 0
    printf("Partially initialized: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr4[i]);
    }
    printf(" (Note: unspecified elements = 0)\n\n");

    /* ----------------------------------------------------------------
     * METHOD 5: Zero Initialization
     * ----------------------------------------------------------------
     * Quick way to initialize all elements to 0
     */
    printf("METHOD 5: Zero Initialization\n");
    int arr5[5] = {0}; // All elements set to 0
    printf("All zeros: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr5[i]);
    }
    printf("\n\n");

    /* ----------------------------------------------------------------
     * METHOD 6: Compiler-Deduced Size
     * ----------------------------------------------------------------
     * Compiler calculates size based on number of initializers
     */
    printf("METHOD 6: Compiler-Deduced Size\n");
    int arr6[] = {5, 10, 15, 20, 25};          // Size automatically set to 5
    int size = sizeof(arr6) / sizeof(arr6[0]); // Calculate array size
    printf("Auto-sized array (size=%d): ", size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr6[i]);
    }
    printf("\n\n");

    /**
     * IMPORTANT NOTES:
     * ----------------
     * 1. Array size must be a constant or known at compile time
     * 2. Partial initialization sets remaining elements to 0
     * 3. Uninitialized arrays contain garbage values
     * 4. sizeof(array) gives total bytes; divide by sizeof(element) for count
     */

    return 0;
}
