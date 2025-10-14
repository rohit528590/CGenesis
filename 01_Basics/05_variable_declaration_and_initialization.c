/*
Author: Rohit Kumar
Purpose: Understanding variables, declaration, and initialization
*/

#include <stdio.h>

int main()
{
   printf("=== VARIABLE DECLARATION AND INITIALIZATION ===\n\n");
    
   // METHOD 1: DECLARATION FOLLOWED BY INITIALIZATION
   int studentAge;          // Declaration - reserves memory for an integer
   studentAge = 18;         // Initialization - assigns value to the variable
    
   printf("Method 1 - Separate declaration and initialization:\n");
   printf("Student age: %d years\n\n", studentAge);
    
   // METHOD 2: DECLARATION WITH IMMEDIATE INITIALIZATION
   int courseCredits = 3;   // Declaration + initialization in one line
    
   printf("Method 2 - Combined declaration and initialization:\n");
   printf("Course credits: %d\n\n", courseCredits);
    
   // METHOD 3: MULTIPLE VARIABLE DECLARATION
   int math = 85, science = 92, english = 88;  // Multiple variables at once
    
   printf("Method 3 - Multiple variable declaration:\n");
   printf("Math score: %d\n", math);
   printf("Science score: %d\n", science);
   printf("English score: %d\n\n", english);
    
   // METHOD 4: MIXED DECLARATIONS
   int totalStudents = 30;
   int presentStudents;
   presentStudents = 28;
   int absentStudents = totalStudents - presentStudents;
    
   printf("Method 4 - Mixed declaration styles:\n");
   printf("Total students: %d\n", totalStudents);
   printf("Present students: %d\n", presentStudents);
   printf("Absent students: %d\n\n", absentStudents);
    
   // UNDERSTANDING FORMAT SPECIFIERS
   printf("=== FORMAT SPECIFIERS EXPLAINED ===\n");
   printf("%%d is used for integers: %d\n", studentAge);
   printf("Variables store values in computer memory\n");
   printf("Each variable has a name, type, and value\n");
    
   return 0;
}

/*

1. MEMORY ALLOCATION:
   - Each variable occupies specific memory space
   - Size depends on data type (int = 4 bytes typically)
   - Compiler manages memory allocation automatically

2. FORMAT SPECIFIERS:
   - %d for integers (decimal)
   - Tell printf() how to interpret and display variables
   - Must match the variable data type

3. BEST PRACTICES:
✓ Initialize variables when declared when possible
✓ Use meaningful variable names
✓ Group related variable declarations
✓ Initialize before using in calculations
*/