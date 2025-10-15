/**
 * ============================================================================
 * TOPIC: Introduction to 2D Arrays (Matrices)
 * ============================================================================
 *
 * LEARNING OBJECTIVES:
 * - Understand 2D arrays as "arrays of arrays"
 * - Learn row-column indexing
 * - Master 2D array declaration and initialization
 * - Visualize matrix representation
 *
 * ============================================================================
 */

#include <stdio.h>

/**
 * CONCEPT: What is a 2D Array?
 * -----------------------------
 * A 2D array is an array of arrays, used to store data in a tabular format
 * (rows and columns), like a matrix or spreadsheet.
 *
 * SYNTAX:
 *     data_type array_name[rows][columns];
 *
 * MEMORY VISUALIZATION:
 *     int matrix[3][4];  // 3 rows, 4 columns
 *
 *          Column: 0    1    2    3
 *                ┌────┬────┬────┬────┐
 *        Row 0:  │ 00 │ 01 │ 02 │ 03 │
 *                ├────┼────┼────┼────┤
 *        Row 1:  │ 10 │ 11 │ 12 │ 13 │
 *                ├────┼────┼────┼────┤
 *        Row 2:  │ 20 │ 21 │ 22 │ 23 │
 *                └────┴────┴────┴────┘
 *
 * ACCESS: matrix[row][column]
 * Example: matrix[1][2] accesses element at row 1, column 2 (value 12)
 *
 * REAL-WORLD USES:
 * - Image processing (pixels in rows and columns)
 * - Game boards (chess, tic-tac-toe)
 * - Mathematical matrices
 * - Spreadsheet-like data
 */

int main()
{
    printf("=== 2D Array (Matrix) Tutorial ===\n\n");

    /* ----------------------------------------------------------------
     * METHOD 1: Declaration and Manual Assignment
     * ----------------------------------------------------------------
     */
    printf("METHOD 1: Manual Assignment\n");
    int matrix1[2][3]; // 2 rows, 3 columns

    // Assign values manually
    matrix1[0][0] = 1;
    matrix1[0][1] = 2;
    matrix1[0][2] = 3;
    matrix1[1][0] = 4;
    matrix1[1][1] = 5;
    matrix1[1][2] = 6;

    // Display using nested loops
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    /* ----------------------------------------------------------------
     * METHOD 2: Declaration with Initialization (Recommended)
     * ----------------------------------------------------------------
     */
    printf("METHOD 2: Initialization at Declaration\n");
    int matrix2[2][3] = {
        {1, 2, 3}, // Row 0
        {4, 5, 6}  // Row 1
    };

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    /* ----------------------------------------------------------------
     * METHOD 3: Partial Initialization
     * ----------------------------------------------------------------
     */
    printf("METHOD 3: Partial Initialization (rest = 0)\n");
    int matrix3[3][3] = {
        {1, 2}, // Row 0: {1, 2, 0}
        {3},    // Row 1: {3, 0, 0}
                // Row 2: {0, 0, 0}
    };

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", matrix3[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    /* ----------------------------------------------------------------
     * METHOD 4: Compact Initialization (Without Inner Braces)
     * ----------------------------------------------------------------
     */
    printf("METHOD 4: Compact Initialization\n");
    int matrix4[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    // Fills row-wise: Row 0: {1,2,3,4}, Row 1: {5,6,7,8}

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("%d ", matrix4[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    /* ----------------------------------------------------------------
     * PRACTICAL EXAMPLE: Student Marks (3 students, 4 subjects)
     * ----------------------------------------------------------------
     */
    printf("EXAMPLE: Student Marks Matrix\n");
    printf("          Math  Phy  Chem  Bio\n");
    printf("        ┌─────────────────────┐\n");

    int marks[3][4] = {
        {85, 90, 78, 92}, // Student 1
        {88, 76, 85, 80}, // Student 2
        {92, 88, 91, 95}  // Student 3
    };

    const char *subjects[] = {"Math", "Phy", "Chem", "Bio"};

    for (int student = 0; student < 3; student++)
    {
        printf("Student %d: ", student + 1);
        for (int subject = 0; subject < 4; subject++)
        {
            printf(" %3d ", marks[student][subject]);
        }
        printf("\n");
    }

    /**
     * KEY CONCEPTS:
     * -------------
     * 1. First index = row, Second index = column
     * 2. Total elements = rows × columns
     * 3. Memory is stored row-wise (row-major order)
     * 4. Nested loops are essential for 2D array operations
     * 5. Size of first dimension can be omitted during initialization
     *
     * IMPORTANT NOTES:
     * ----------------
     * ✓ int matrix[][3] = {...}; ← Valid (rows deduced)
     * ✗ int matrix[3][] = {...}; ← Invalid (columns must be specified)
     */

    return 0;
}

/**
 * EXPECTED OUTPUT:
 * ----------------
 * === 2D Array (Matrix) Tutorial ===
 *
 * EXAMPLE: Student Marks Matrix
 *           Math  Phy  Chem  Bio
 *         ┌─────────────────────┐
 * Student 1:   85   90   78   92
 * Student 2:   88   76   85   80
 * Student 3:   92   88   91   95
 *
 * ============================================================================
 */
