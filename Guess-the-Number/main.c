/*
    Author: Matt Johnson
    Subject: challenge and demonstration
    Purpose: program guesses a number
    Date: 01/27/2023

    Instructions:

        1. program will generate a random number from 0 to 20
        2. ask the user to guess it
            - user should only be able to enter numbers from 0 to 20
        3. program will indicate if each guess is too high or too low
        4. player wins the game if they can guess the number within
           five tries

    Sample Output:

        This is a guessing game.
        I have chosen a number between 0 and 20, which you must guess.

        You have 5 tries left.
        Enter a guess: 12
        Sorry, 12 is wrong. My number is less than that.

        You have 4 tries left.
        Enter a guess: 8
        Sorry, 8 is wrong. My number is less than that.

        You have 3 tries left.
        Enter a guess: 4
        Sorry 4 is wrong. My number is less than that.

        You have 2 tries left.
        Enter a guess: 2

        Congratulations! You guessed it!

    Generate Random Numbers

        - generate a randon number from 0 to 20
            + include the correct system libraries
                - #include <stdlib.h>
                - #include <time.h>
            + create a time variable
                - time_t t;
            + initialize the random number generator
                - srand((unsigned) time(&t));
            + get the random number 0 to 20 and store
              it in an int variable
                - int random_number = rand() % 21;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generator seed

int main(void) {

    // initialize and declare variables
    int random_number = 0;
    int guess = 0;
    int num_guesses;
    time_t t;

    // initialize random number generator
    srand((unsigned) time(&t));

    // get random number
    random_number = rand() % 21;

    // display prompt
    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 20, which you must guess. \n");

    // enter loop
    for (num_guesses = 5; num_guesses > 0; --num_guesses) {
        printf("\nYou have %d tr%s left.", num_guesses, num_guesses == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if (guess == random_number) {
            printf("\nCongratulations! You guessed it!\n");
            return 1;
        } else if (guess < 0 || guess > 20) {
            printf("\nI said the number is between 0 and 20.");
        } else if (random_number > guess) {
            printf("\nSorry, %d is wrong. My number is greater than that.", guess);
        } else if (random_number < guess) {
            printf("\nSorry, %d is wrong. My number is less than that.\n", guess);
        }
    }

    printf("\nYou have had five tries and failed. The number was %d.\n", random_number);

    return 0;
}
