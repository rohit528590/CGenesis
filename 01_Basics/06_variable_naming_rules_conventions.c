/*
Author: Rohit Kumar
Purpose: Understanding variable naming rules and conventions
*/

#include <stdio.h>

int main()
{
  printf("=== VARIABLE NAMING RULES AND CONVENTIONS ===\n\n");
    
  // VALID VARIABLE NAMES - Following all rules
  printf("Valid Variable Names Examples:\n");
    
  int studentAge = 20;                    // Descriptive name
  float averageScore = 85.5f;             // Clear purpose
  char gradeLevel = 'A';                  // Single character
  int total_marks = 450;                  // Underscore separator
  double accountBalance = 1250.75;        // CamelCase style
  int counter1 = 0;                       // Numbers allowed (not at start)
    
  printf("Student Age: %d\n", studentAge);
  printf("Average Score: %.1f\n", averageScore);
  printf("Grade Level: %c\n", gradeLevel);
  printf("Total Marks: %d\n", total_marks);
  printf("Account Balance: $%.2f\n", accountBalance);
  printf("Counter: %d\n\n", counter1);
    
  // NAMING CONVENTION EXAMPLES
  printf("Different Naming Styles:\n");
    
  // Snake case (recommended for C)
  int student_count = 25;
  float average_temperature = 23.5f;
    
  // Camel case
  int maxAttempts = 3;
  double finalResult = 97.8;
    
  printf("Students: %d (snake_case)\n", student_count);
  printf("Temperature: %.1f°C (snake_case)\n", average_temperature);
  printf("Max Attempts: %d (camelCase)\n", maxAttempts);
  printf("Final Result: %.1f%% (camelCase)\n\n", finalResult);
    
  // DEMONSTRATING CASE SENSITIVITY
  printf("Case Sensitivity Demonstration:\n");
  int Value = 100;    // Different from 'value'
  int value = 200;    // Different from 'Value'
  int VALUE = 300;    // Different from both above
    
  printf("Value (capital V): %d\n", Value);
  printf("value (lowercase): %d\n", value);
  printf("VALUE (uppercase): %d\n\n", VALUE);
    
  return 0;
}

/*
VARIABLE NAMING RULES (MANDATORY):
================================

✓ MUST START WITH:
  - Letter (A-Z, a-z)
  - Underscore (_)

✓ CAN CONTAIN:
  - Letters (A-Z, a-z)
  - Digits (0-9) 
  - Underscores (_)

✗ CANNOT:
  - Start with a digit (1number ❌)
  - Contain spaces (my var ❌)
  - Contain special characters (@, #, $, %, etc.)
  - Use C keywords (int, return, if, etc.)

✓ CASE SENSITIVE:
  - 'value' and 'Value' are different variables
  - Be consistent with your chosen style

EXAMPLES:
──────────────────────────────────────────
VALID Names          │ INVALID Names
─────────────────────┼───────────────────
student_age          │ 1student (starts with digit)
averageScore         │ student-age (contains hyphen)  
_counter             │ my variable (contains space)
grade1               │ int (C keyword)
MAX_SIZE             │ @username (special character)
temperature_C        │ student$ (special character)
*/