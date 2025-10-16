/**
 * ============================================================================
 * TOPIC: Passing 2D Arrays to Functions
 * ============================================================================
 *
 * LEARNING OBJECTIVES:
 * - Learn special syntax for 2D array parameters
 * - Understand why column size must be specified
 * - Master matrix operations in functions
 * - Handle dynamic 2D arrays
 *
 * ============================================================================
 */

#include <stdio.h>

#define ROWS 3
#define COLS 4

/**
 * CRITICAL RULE: 2D Array Parameters
 * -----------------------------------
 * When passing 2D arrays, you MUST specify the number of COLUMNS:
 *
 * ✓ void func(int matrix[][4], int rows)      ← Correct
 * ✗ void func(int matrix[][], int rows)       ← Error: Column size needed
 * ✓ void func(int matrix[3][4])               ← Valid but less flexible
 * ✓ void func(int (*matrix)[4], int rows)     ← Pointer notation (advanced)
 *
 * WHY? The compiler needs column count to calculate memory addresses.
 * matrix[i][j] is computed as: base_address + (i * COLS + j) * sizeof(int)
 */

/* ----------------------------------------------------------------
 * Function 1: Display 2D Array
 * ----------------------------------------------------------------
 */
void display2DArray(int matrix[][COLS], int rows)
{
    printf("Matrix (%d x %d):\n", rows, COLS);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

/* ----------------------------------------------------------------
 * Function 2: Fill Matrix with Values
 * ----------------------------------------------------------------
 */
void fillMatrix(int matrix[][COLS], int rows, int value)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] = value;
        }
    }
}

/* ----------------------------------------------------------------
 * Function 3: Calculate Row Sums
 * ----------------------------------------------------------------
 */
void calculateRowSums(int matrix[][COLS], int rows, int rowSums[])
{
    for (int i = 0; i < rows; i++)
    {
        rowSums[i] = 0;
        for (int j = 0; j < COLS; j++)
        {
            rowSums[i] += matrix[i][j];
        }
    }
}

/* ----------------------------------------------------------------
 * Function 4: Calculate Column Sums
 * ----------------------------------------------------------------
 */
void calculateColumnSums(int matrix[][COLS], int rows, int colSums[])
{
    // Initialize column sums to 0
    for (int j = 0; j < COLS; j++)
    {
        colSums[j] = 0;
    }

    // Calculate sums
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            colSums[j] += matrix[i][j];
        }
    }
}

/* ----------------------------------------------------------------
 * Function 7: Find Maximum Element with Position
 * ----------------------------------------------------------------
 */
int findMaxElement(int matrix[][COLS], int rows, int *maxRow, int *maxCol)
{
    int max = matrix[0][0];
    *maxRow = 0;
    *maxCol = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                *maxRow = i;
                *maxCol = j;
            }
        }
    }

    return max;
}

/* ----------------------------------------------------------------
 * MAIN FUNCTION: Comprehensive Demonstration
 * ----------------------------------------------------------------
 */
int main()
{
    printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║        2D ARRAYS IN FUNCTIONS                          ║\n");
    printf("╚════════════════════════════════════════════════════════╝\n\n");

    /* ----------------------------------------------------------------
     * TEST 1: Basic Display
     * ----------------------------------------------------------------
     */
    printf("=== TEST 1: Display Matrix ===\n");
    int matrix1[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    display2DArray(matrix1, ROWS);

    /* ----------------------------------------------------------------
     * TEST 2: Fill Matrix
     * ----------------------------------------------------------------
     */
    printf("\n=== TEST 2: Fill Matrix ===\n");
    int matrix2[ROWS][COLS];
    fillMatrix(matrix2, ROWS, 99);
    printf("Matrix filled with 99:\n");
    display2DArray(matrix2, ROWS);

    /* ----------------------------------------------------------------
     * TEST 3: Row and Column Sums
     * ----------------------------------------------------------------
     */
    printf("\n=== TEST 3: Row and Column Sums ===\n");
    int rowSums[ROWS];
    int colSums[COLS];

    calculateRowSums(matrix1, ROWS, rowSums);
    calculateColumnSums(matrix1, ROWS, colSums);

    printf("Row Sums: ");
    for (int i = 0; i < ROWS; i++)
    {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

    printf("Column Sums: ");
    for (int j = 0; j < COLS; j++)
    {
        printf("%d ", colSums[j]);
    }
    printf("\n");

    /* ----------------------------------------------------------------
     * TEST 6: Find Maximum
     * ----------------------------------------------------------------
     */
    printf("\n=== TEST 6: Find Maximum ===\n");
    int maxRow, maxCol;
    int maxValue = findMaxElement(matrix1, ROWS, &maxRow, &maxCol);

    printf("Maximum value: %d\n", maxValue);
    printf("Position: [%d][%d] (row %d, column %d)\n",
           maxRow, maxCol, maxRow, maxCol);

    /**
     * ADVANCED TOPIC: Dynamic 2D Arrays
     * ----------------------------------
     * For truly dynamic 2D arrays (runtime dimensions), use:
     * 1. Array of pointers: int **matrix
     * 2. VLA (Variable Length Array): int matrix[rows][cols]
     * 3. Single allocation: int *matrix (treat as 1D, calculate indices)
     *
     * LIMITATIONS:
     * ------------
     * - Cannot return 2D arrays directly from functions
     * - Workaround: Pass result array as parameter (as shown above)
     * - Or use dynamic allocation with pointers (advanced)
     *
     * BEST PRACTICES:
     * ---------------
     * ✓ Use #define for fixed dimensions
     * ✓ Always pass row count; column count in parameter type
     * ✓ Document matrix dimensions in function comments
     * ✓ Validate dimensions match before operations
     * ✓ Use const for read-only matrices
     */

    return 0;
}
