/**
 * ============================================================================
 * TOPIC: Efficient 2D Array Input/Output Operations
 * ============================================================================
 *
 * LEARNING OBJECTIVES:
 * - Master nested loop traversal for 2D arrays
 * - Implement efficient input/output patterns
 * - Use preprocessor directives for matrix dimensions
 * - Format matrix display professionally
 *
 * ============================================================================
 */

#include <stdio.h>

// Define matrix dimensions using preprocessor directives
#define ROWS 3
#define COLS 4

/**
 * WHY USE #define?
 * ----------------
 * - Easy to modify dimensions in one place
 * - No memory overhead (replaced at compile time)
 * - Makes code more maintainable and readable
 * - Commonly used in production code
 */

int main()
{
    int matrix[ROWS][COLS];

    printf("=== 2D Array Input/Output System ===\n\n");

    /* ----------------------------------------------------------------
     * SECTION 1: Input - Reading Matrix Elements
     * ----------------------------------------------------------------
     * Nested loops: Outer loop for rows, inner loop for columns
     */
    printf("Enter elements for a %d x %d matrix:\n", ROWS, COLS);

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    /* ----------------------------------------------------------------
     * SECTION 2: Output - Display Matrix (Basic Format)
     * ----------------------------------------------------------------
     */
    printf("\n--- Matrix (Basic Display) ---\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    /* ----------------------------------------------------------------
     * SECTION 3: Output - Display Matrix (Formatted)
     * ----------------------------------------------------------------
     */
    printf("\n--- Matrix (Formatted Display) ---\n");
    printf("┌");
    for (int j = 0; j < COLS; j++)
        printf("──────");
    printf("┐\n");

    for (int i = 0; i < ROWS; i++)
    {
        printf("│");
        for (int j = 0; j < COLS; j++)
        {
            printf(" %4d ", matrix[i][j]); // Right-aligned, 4-char width
        }
        printf("│\n");
    }

    printf("└");
    for (int j = 0; j < COLS; j++)
        printf("──────");
    printf("┘\n");

    /* ----------------------------------------------------------------
     * SECTION 4: Processing - Row and Column Sums
     * ----------------------------------------------------------------
     */
    printf("\n--- Row-wise Sums ---\n");
    for (int i = 0; i < ROWS; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < COLS; j++)
        {
            rowSum += matrix[i][j];
        }
        printf("Row %d sum: %d\n", i, rowSum);
    }

    printf("\n--- Column-wise Sums ---\n");
    for (int j = 0; j < COLS; j++)
    {
        int colSum = 0;
        for (int i = 0; i < ROWS; i++)
        {
            colSum += matrix[i][j];
        }
        printf("Column %d sum: %d\n", j, colSum);
    }

    /* ----------------------------------------------------------------
     * SECTION 5: Processing - Find Maximum and Minimum
     * ----------------------------------------------------------------
     */
    int max = matrix[0][0];
    int min = matrix[0][0];
    int maxRow = 0, maxCol = 0;
    int minRow = 0, minCol = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    printf("\n--- Statistics ---\n");
    printf("Maximum: %d at position [%d][%d]\n", max, maxRow, maxCol);
    printf("Minimum: %d at position [%d][%d]\n", min, minRow, minCol);

    /* ----------------------------------------------------------------
     * SECTION 6: Transpose Matrix
     * ----------------------------------------------------------------
     */
    printf("\n--- Transposed Matrix ---\n");
    printf("Original: %d x %d → Transposed: %d x %d\n", ROWS, COLS, COLS, ROWS);

    int transpose[COLS][ROWS];

    // Transpose logic: swap rows and columns
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display transposed matrix
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            printf("%4d ", transpose[i][j]);
        }
        printf("\n");
    }

    /**
     * TRAVERSAL PATTERNS:
     * -------------------
     * 1. Row-major (standard):
     *    for (i) for (j) → process matrix[i][j]
     *
     * 2. Column-major:
     *    for (j) for (i) → process matrix[i][j]
     *
     * 3. Diagonal:
     *    for (i) → process matrix[i][i] (main diagonal)
     *
     * PERFORMANCE TIPS:
     * -----------------
     * ✓ Access elements in row-major order (cache-friendly)
     * ✓ Use const for read-only matrices
     * ✓ Avoid repeated calculations in loops
     * ✓ Consider pointer arithmetic for large matrices
     */

    return 0;
}