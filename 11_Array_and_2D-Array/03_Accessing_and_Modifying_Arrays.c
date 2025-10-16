/**
 * ============================================================================
 * TOPIC: Efficient Array Access and Modification Using Loops
 * ============================================================================
 *
 * LEARNING OBJECTIVES:
 * - Use loops for efficient array traversal
 * - Master input and output operations with arrays
 * - Understand the advantages of loop-based processing
 * - Practice array manipulation techniques
 *
 * ============================================================================
 */

#include <stdio.h>

#define MAX_STUDENTS 5 // Constant for array size

int main()
{
    int marks[MAX_STUDENTS];

    printf("=== Student Marks Management System ===\n\n");

    /* ----------------------------------------------------------------
     * SECTION 1: Input - Reading Array Elements
     * ----------------------------------------------------------------
     * Using a loop is more efficient than individual scanf statements
     */
    printf("Enter marks for %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Student %d: ", i + 1); // Display 1-based numbering for user
        scanf("%d", &marks[i]);        // Store in 0-based index

        // Input validation (optional but good practice)
        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks! Please enter between 0-100.\n");
            i--; // Retry this iteration
        }
    }

    /* ----------------------------------------------------------------
     * SECTION 2: Output - Displaying Array Elements
     * ----------------------------------------------------------------
     */
    printf("\n--- Student Marks Report ---\n");
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Student %d: %d marks\n", i + 1, marks[i]);
    }

    /* ----------------------------------------------------------------
     * SECTION 3: Processing - Finding Maximum, Minimum, and Average
     * ----------------------------------------------------------------
     */
    int max = marks[0], min = marks[0], sum = 0;

    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        // Find maximum
        if (marks[i] > max)
        {
            max = marks[i];
        }

        // Find minimum
        if (marks[i] < min)
        {
            min = marks[i];
        }

        // Calculate sum for average
        sum += marks[i];
    }

    float average = (float)sum / MAX_STUDENTS; // Type casting for decimal result

    printf("\n--- Statistics ---\n");
    printf("Highest Marks: %d\n", max);
    printf("Lowest Marks: %d\n", min);
    printf("Average Marks: %.2f\n", average);

    /* ----------------------------------------------------------------
     * SECTION 4: Modification - Updating Array Elements
     * ----------------------------------------------------------------
     */
    printf("\n--- Applying 5-Mark Grace ---\n");
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        marks[i] += 5; // Add grace marks

        // Ensure marks don't exceed 100
        if (marks[i] > 100)
        {
            marks[i] = 100;
        }

        printf("Student %d: %d marks (after grace)\n", i + 1, marks[i]);
    }

    /**
     * WHY USE LOOPS WITH ARRAYS?
     * ---------------------------
     * ✓ Reduces code repetition
     * ✓ Scales easily (change MAX_STUDENTS once)
     * ✓ Enables complex processing (searching, sorting, etc.)
     * ✓ Makes code more maintainable
     *
     * BEST PRACTICES:
     * ---------------
     * 1. Use #define or const for array sizes
     * 2. Always validate user input
     * 3. Use meaningful variable names (i, j for loops is acceptable)
     * 4. Check array bounds to prevent overflow
     * 5. Initialize arrays before use
     */

    return 0;
}