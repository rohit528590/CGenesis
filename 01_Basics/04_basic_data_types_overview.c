/*
Author: Rohit Kumar
Purpose: Understanding fundamental data types in C
*/

#include <stdio.h>

int main()
{
    printf("=== C PROGRAMMING DATA TYPES ===\n\n");
    
    // INTEGER DATA TYPE
    printf("1. INTEGER DATA TYPE (int):\n");
    int studentCount = 45;           // Whole numbers (positive/negative)
    int temperature = -5;            // Can store negative values
    int year = 2025;                 // Commonly used for counting, IDs
    
    printf("   Students in class: %d\n", studentCount);
    printf("   Temperature: %d°C\n", temperature);
    printf("   Current year: %d\n", year);
    printf("   Format specifier: %%d (decimal integer)\n\n");
    
    // FLOATING POINT DATA TYPE  
    printf("2. FLOATING POINT DATA TYPE (float):\n");
    float percentage = 87.5f;         // Decimal numbers (single precision)
    float pi = 3.14159f;             // Mathematical constants
    float price = 29.99f;            // Currency values
    
    printf("   Exam percentage: %.1f%%\n", percentage);      // 1 decimal place
    printf("   Value of PI: %.5f\n", pi);                    // 5 decimal places  
    printf("   Product price: $%.2f\n", price);              // 2 decimal places
    printf("   Format specifier: %%f (floating point)\n\n");
    
    // CHARACTER DATA TYPE
    printf("3. CHARACTER DATA TYPE (char):\n");
    char grade = 'A';                // Single character in single quotes
    char initial = 'J';              // Letters, digits, symbols
    char symbol = '@';               // Special characters
    
    printf("   Student grade: %c\n", grade);
    printf("   Name initial: %c\n", initial);  
    printf("   Email symbol: %c\n", symbol);
    printf("   Format specifier: %%c (single character)\n\n");
    
    // DOUBLE PRECISION DATA TYPE
    printf("4. DOUBLE PRECISION DATA TYPE (double):\n");
    double scientificValue = 299792458.0;    // Very large/precise numbers
    double bankBalance = 15847.63;           // High precision financial data
    double piPrecise = 3.141592653589793;    // More precise than float
    
    printf("   Speed of light: %.0f m/s\n", scientificValue);
    printf("   Bank balance: $%.2f\n", bankBalance);
    printf("   Precise PI: %.15f\n", piPrecise);
    printf("   Format specifier: %%lf (double precision)\n\n");
    
    // PRACTICAL EXAMPLE - Student Information System
    printf("=== STUDENT INFORMATION SYSTEM EXAMPLE ===\n");
    int studentID = 12345;
    char section = 'B';
    float gpa = 3.85f;
    double fees = 15750.50;
    
    printf("Student ID: %d\n", studentID);
    printf("Section: %c\n", section);
    printf("GPA: %.2f/4.0\n", gpa);
    printf("Annual Fees: $%.2lf\n", fees);
    
    return 0;
}

/*
C DATA TYPES COMPREHENSIVE GUIDE:
=================================

PRIMARY DATA TYPES:
┌─────────────┬──────────────┬─────────────┬──────────────────────┐
│ Data Type   │ Size (bytes) │ Range       │ Format Specifier     │
├─────────────┼──────────────┼─────────────┼──────────────────────┤
│ int         │ 4            │-2³¹ to 2³¹-1│ %d                   │
│ float       │ 4            │ ~7 digits   │ %f                   │
│ double      │ 8            │ ~15 digits  │ %lf                  │
│ char        │ 1            │ -128 to 127 │ %c                   │
└─────────────┴──────────────┴─────────────┴──────────────────────┘

FORMAT SPECIFIERS PRECISION:
- %d - Integer (whole numbers)
- %f - Float (default 6 decimal places)
- %.2f - Float with 2 decimal places
- %c - Single character
- %lf - Double precision float

MEMORY EFFICIENCY TIP:
Choose the smallest data type that meets your needs to optimize memory usage.
*/