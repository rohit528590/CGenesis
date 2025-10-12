// Program to Call a function print_date that prints the current date.
// Define the function without any parameters.
#include <stdio.h>
#include <time.h>

void print_date()
{
    time_t current_time;
    time(&current_time);

    char *date_string = asctime(localtime(&current_time));
    printf("\nCurrent Date is : %s\n", date_string);
}

int main()
{
    print_date();
    return 0;
}