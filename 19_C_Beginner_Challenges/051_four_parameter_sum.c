// Program to create a function that adds that takes 4 int parameters and returns the sum.
#include <stdio.h>

int Add(int a, int b, int c, int d)
{
    int sum = a + b + c + d;
    return sum;
}

int main()
{
    printf("Welcome to Adding 4 Numbers\n");
    printf("%d\n", Add(1, 2, 3, 4));
    printf("%d\n", Add(11, 22, 33, 44));
    printf("%d\n", Add(20, 10, 15, 96));
    return 0;
}