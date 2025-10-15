#include <stdio.h>
#include <math.h>

void printf_menu();
double Division(double, double);
double Modulus(int, int);

void printf_menu()
{
    printf("\n\n------------------------------");
    printf("\nWelcome to Simple Calculator\n\n");
    printf("Choose one of the following options -:\n");
    printf("1. Addition\n");
    printf("2. Substract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("Now, Enter your Choice : ");
}

int main()
{
    int choice;
    double first, second, result;

    while (1)
    {
        printf_menu();
        scanf("%d", &choice);

        if (choice == 7)
        {
            break;
        }
        else if (choice < 1 || choice > 7)
        {
            fprintf(stderr, "Invalid Menu Choice.\n");
            continue;
        }

        printf("\nEnter the First Number : ");
        scanf("%lf", &first);

        printf("Enter the Second Number : ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1: // Add
            result = first + second;
            break;
        case 2: // Substract
            result = first - second;
            break;
        case 3: // Multiply
            result = first * second;
            break;
        case 4: // Divide
            result = Division(first, second);
            break;
        case 5: // Modulus
            result = Modulus(first, second);
            break;
        case 6: // Power
            result = pow(first, second);
            break;
        }

        if (!isnan(result))
        {
            printf("\nResult of operation is : %3.f\n", result);
        }
    }

    return 0;
}

double Division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Division");
        return NAN;
    }
    else
    {
        return a / b;
    }
}

double Modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Modulus");
        return NAN;
    }
    else
    {
        return a % b;
    }
}