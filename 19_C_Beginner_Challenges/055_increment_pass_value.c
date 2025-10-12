// Program to Demonstrate with a function increment that the original integer passed
// to it does not change after incrementing it inside the function.
#include <stdio.h>

void Increment(int number)
{
    printf("In Increment Function Before : Value of Number is : %d\n", number);
    number++;
    printf("In Increment Function After : Value of Number is : %d\n", number);

    return;
}

int main()
{
    printf("Welcome to Showing Call By Value\n");
    int number;

    printf("Enter the Number : ");
    scanf("%d", &number);

    printf("Before Increment Function Calling : Value of Number is : %d\n", number);
    Increment(number);
    printf("After Increment Function Calling : Value of Number is : %d\n", number);
    
    return 0;
}