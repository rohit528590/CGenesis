// Program to create a function max that takes two float arguments and returns the larger value.
#include <stdio.h>

float Maxinum(float first, float second)
{
    float max = (first > second) ? first : second;
    return max;
}

int main()
{
    printf("Welcome to Finding Maxinum element\n");
    float first, second;

    printf("Enter the First Number : ");
    scanf("%f", &first);

    printf("Enter the Second Number : ");
    scanf("%f", &second);

    (first == second) ? printf("Both are equal\n") : printf("The Larger Number is : %.3f\n", Maxinum(first, second));
    return 0;
}