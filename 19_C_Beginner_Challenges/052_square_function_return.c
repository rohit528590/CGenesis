// Program to Define a function square that takes an int and returns its square.
#include <stdio.h>

int Square(int n)
{
    return n * n;
}

int main()
{
    printf("Welcome to the World of Squares\n");
    int number;

    printf("Enter the Number : ");
    scanf("%d", &number);

    printf("The Square of %d is : %d\n", number, Square(number));
    return 0;
}