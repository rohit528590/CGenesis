/*
25. In-place program to transform a given square matrix (n × n) by reversing elements of every odd-indexed column.
    Example (rows = 4, cols = 4):
    Input Matrix:               Transformed Matrix:
    1   2   3   4               4   8   12  16
    5   6   7   8               15  11  7   3
    9   10  11  12              2   6   10  14
    13  14  15  16              13  9   5   1
*/

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the square matrix : ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter all %d elements -:\n", size * size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    // Transpose the matrix in-place for odd-indexed columns
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
           // Swap elements to transpose
           int temp = matrix[i][j];
           matrix[i][j] = matrix[j][i];
           matrix[j][i] = temp;
        }

    }

    // Swap rows top ↔ bottom
    int top = 0; // Start of the row
    int bottom = size - 1; // End of the row
    
    // Swap rows top ↔ bottom
    while (bottom > top)
    {
        // Swap elements in the current row
        for (int i = 0; i < size; i++)
        {
            int temp = matrix[top][i];
            matrix[top][i] = matrix[bottom][i];
            matrix[bottom][i] = temp;
        }

        top++;
        bottom--;
    }

    // Reverse every odd-indexed row
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            int left = 0; // Start of the column
            int right = size - 1; // End of the column
            
            // Swap elements in the current column
            while (left < right)
            {
                int temp = matrix[i][left];
                matrix[i][left] = matrix[i][right];
                matrix[i][right] = temp;

                left++;
                right--;
            }
        }
    }

    printf("Transformed Matrix -:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}