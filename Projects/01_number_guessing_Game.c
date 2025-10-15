// Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Welcome to Number Guessing Game\n");
    srand(time(0)); // Seed the random number generator.
    int random_number = (rand() % 100) + 1; // Generate a random number between 1 and 100.

    printf("\nHi, I am Computer I think a Number between (1 to 100), Can you Guess the Number :");

    int guess, no_of_guesses = 0;
    do
    {
        printf("\nEnter your Guess : ");
        scanf("%d", &guess);

        if (guess > random_number)
        {
            printf("Guess a Smaller Number.\n");
        }

        else if (random_number > guess)
        {
            printf("Guess a Larger number.\n");
        }

        no_of_guesses++;
    } while (guess != random_number);

    printf("Conguration !!!You have successfully guessed the Number in %d attempts\n", no_of_guesses);
    printf("\nBye Bye, Thanks for Playing.\n");
    printf("Developed By : Rohit Kumar\n");
    return 0;
}