/**
 * ============================================================================
 * FILE: 07_Practice_2D_Arrays.c
 * TOPIC: Hands-On Exercises for 2D Arrays
 * ============================================================================
 *
 * Progressive exercises covering 2D array operations.
 * Uncomment each exercise to practice.
 *
 * ============================================================================
 */

#include <stdio.h>

/* ========================================================================
 * EXERCISE 1: Identity Matrix Generator
 * ========================================================================
 * TASK: Create and display an identity matrix of size n x n
 * Identity matrix: Diagonal elements = 1, others = 0
 */
void exercise1()
{
    printf("\n=== EXERCISE 1: Identity Matrix ===\n");

    int n;
    printf("Enter matrix size: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Generate identity matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = (i == j) ? 1 : 0; // Diagonal = 1, else 0
        }
    }

    // Display
    printf("\nIdentity Matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

/* ========================================================================
 * EXERCISE 2: Matrix Addition
 * ========================================================================
 * TASK: Add two matrices and display the result
 */
void exercise2()
{
    printf("\n=== EXERCISE 2: Matrix Addition ===\n");

    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];

    // Input first matrix
    printf("\nEnter elements of Matrix 1:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of Matrix 2:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Display result
    printf("\nResultant Matrix (Sum):\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%4d ", sum[i][j]);
        }
        printf("\n");
    }
}

/* ========================================================================
 * EXERCISE 3: Diagonal Sum
 * ========================================================================
 * TASK: Calculate sum of primary and secondary diagonals
 */
void exercise3()
{
    printf("\n=== EXERCISE 3: Diagonal Sum ===\n");

    int n = 4;
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    printf("Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++)
    {
        primarySum += matrix[i][i];           // Primary diagonal (top-left to bottom-right)
        secondarySum += matrix[i][n - 1 - i]; // Secondary diagonal (top-right to bottom-left)
    }

    printf("\nPrimary Diagonal Sum: %d\n", primarySum);
    printf("Secondary Diagonal Sum: %d\n", secondarySum);
}

/* ========================================================================
 * MAIN FUNCTION
 * ========================================================================
 */
int main()
{
    printf("╔════════════════════════════════════════════════╗\n");
    printf("║     2D ARRAY PRACTICE EXERCISES                ║\n");
    printf("╚════════════════════════════════════════════════╝\n");

    // Uncomment to run exercises
    exercise1();
    exercise2();
    exercise3();

    return 0;
}

/**
 * ============================================================================
 * LEARNING PROGRESSION:
 * ---------------------
 * 1. Start with Exercise 1 (Identity Matrix) - Basic nested loops
 * 2. Move to Exercise 2 (Addition) - Multiple matrix operations
 * 3. Try Exercise 3 (Diagonals) - Advanced indexing
 *
 * KEY CONCEPTS COVERED:
 * ---------------------
 * ✓ Nested loop patterns
 * ✓ Matrix arithmetic operations
 * ✓ Diagonal access patterns
 *
 * ============================================================================
 */
