/**
 * ============================================================================
 * TOPIC: Introduction to Arrays in C
 * ============================================================================
 *
 * LEARNING OBJECTIVES:
 * - Understand what an array is and why it's useful
 * - Learn array syntax and declaration
 * - Understand zero-based indexing
 * - Practice basic array operations
 *
 * ============================================================================
 */

#include <stdio.h>

/**
 * CONCEPT: What is an Array?
 * ---------------------------
 * An array is a collection of elements of the SAME data type stored in
 * contiguous (adjacent) memory locations. Instead of declaring multiple
 * variables like marks1, marks2, marks3..., we use a single array.
 *
 * WHY USE ARRAYS?
 * - Store multiple values under one name
 * - Easy to process data using loops
 * - Efficient memory management
 * - Essential for data structures and algorithms
 *
 * SYNTAX:
 *     data_type array_name[size];
 *
 * MEMORY LAYOUT:
 *     int marks[5];
 *
 *     Index:    0      1      2      3      4
 *            +------+------+------+------+------+
 *     marks: | [0]  | [1]  | [2]  | [3]  | [4]  |
 *            +------+------+------+------+------+
 *
 * KEY POINTS:
 * - Indexing starts at 0 and goes to (size - 1)
 * - All elements must be the same data type
 * - Array size must be known at compile time (or use VLA - Variable Length Array)
 * - Accessing out-of-bounds index causes undefined behavior
 */

int main()
{
    // Declare an array to store marks of 5 students
    int marks[5];

    // Assign values to array elements using index notation
    marks[0] = 85; // First element (index 0)
    marks[1] = 92; // Second element (index 1)
    marks[2] = 78; // Third element (index 2)
    marks[3] = 95; // Fourth element (index 3)
    marks[4] = 88; // Fifth element (index 4)

    // Access and display array elements
    printf("=== Student Marks ===\n");
    printf("Student 1: %d\n", marks[0]);
    printf("Student 2: %d\n", marks[1]);
    printf("Student 3: %d\n", marks[2]);
    printf("Student 4: %d\n", marks[3]);
    printf("Student 5: %d\n", marks[4]);

    // Modifying array elements
    marks[2] = 80; // Update third student's marks
    printf("\nAfter updating Student 3's marks: %d\n", marks[2]);

    /**
     * COMMON MISTAKES TO AVOID:
     * -------------------------
     * ❌ int marks[5]; marks[5] = 100;  // Index 5 is out of bounds!
     * ❌ int marks[-1];                 // Negative size is invalid
     * ❌ float marks[5]; marks[0] = "A"; // Type mismatch
     */

    return 0;
}

/**
 *
 * ============================================================================
 * SUMMARY:
 * Arrays provide a way to store multiple values of the same type under a
 * single variable name, accessed via zero-based indexing.
 * ============================================================================
 */