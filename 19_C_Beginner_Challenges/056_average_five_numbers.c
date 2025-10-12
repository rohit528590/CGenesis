// Program to Call a function get_average that takes five int numbers and returns the average.
#include <stdio.h>

float get_average(int a, int b, int c, int d, int e)
{
    return (a + b + c + d + e) / 5.0;
}

int main()
{
    printf("Welcome to Calculating Averages\n");
    int a, b, c, d, e;

    printf("Enter the First Number : ");
    scanf("%d", &a);

    printf("Enter the Second Number : ");
    scanf("%d", &b);

    printf("Enter the Thrid Number : ");
    scanf("%d", &c);

    printf("Enter the Fourth Number : ");
    scanf("%d", &d);

    printf("Finally, Enter the Fifth Number : ");
    scanf("%d", &e);

    float Average = get_average(a, b, c, d, e);
    printf("The Average of given all 5 Numbers is : %.3f\n", Average);
    return 0;
}