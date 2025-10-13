#include <stdio.h>
#include <limits.h>
/*
The header file <limits.h> defines implementation-specific constants that represent
the minimum and maximum limits of fundamental integer data types on your system.

*/
int main()
{
    // It includes macros for:
    printf("CHAR_BIT    = %d\n", CHAR_BIT);
    printf("CHAR_MIN    = %d\n", CHAR_MIN);
    printf("CHAR_MAX    = %d\n", CHAR_MAX);
    printf("INT_MIN     = %d\n", INT_MIN);
    printf("INT_MAX     = %d\n", INT_MAX);
    printf("LONG_MIN    = %ld\n", LONG_MIN);
    printf("LONG_MAX    = %ld\n", LONG_MAX);
    printf("UINT_MAX    = %u\n", UINT_MAX);
    printf("USHRT_MAX   = %u\n", USHRT_MAX);
    printf("ULONG_MAX   = %lu\n", ULONG_MAX);
    return 0;
}