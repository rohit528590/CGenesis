// Program to create a program using recursion to display the Fibonacci series upto a certain number.
#include <stdio.h>

int fibonacci_series(int term)
{
    return (term == 0 || term == 1) ? term : fibonacci_series(term - 1) + fibonacci_series(term - 2);
}

int main()
{
    printf("Welcome to Fibonacci by Recursion\n");
    int term;

    printf("Enter the Number of Terms Nedded : ");
    scanf("%d", &term);

    for (int i = 0; i <= term; i++)
    {
        printf("%d ", fibonacci_series(i));
    }

    printf("\n");
    return 0;
}