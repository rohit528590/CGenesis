// Program using continue to sum all positive numbers entered by the user; skip any negative numbers.
#include <stdio.h>

int main()
{
    printf("Welcome to Adding Positive Number\n");
    int number, sum = 0;

    do
    {
        printf("Enter the Number : ");
        scanf("%d", &number);

        if (number < 0)
        {
            printf("Negative Number %d is Ignored in Addition\n", number);
            continue;
        }
        else if (number != 0)
            printf("To Stop Press Zero (0)\n");
        
        sum += number;
    } while (number != 0);

    printf("The Sum of all Positive Numbers is : %d\n", sum);
    return 0;
}