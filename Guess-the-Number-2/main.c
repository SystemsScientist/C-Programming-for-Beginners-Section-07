/*
    Author: Matt Johnson
    Subject: challenge and demonstration
    Purpose: program guesses a number
    Date: 01/27/2023

    Notes:

        1. program uses a while loop instead of a for loop
        2. program Guess the Number uses a for loop
            - see main.c in the Guess-the_number directory
              for a for loop solution

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    // declare and initialize variables
    int random_number = 0;
    int guess = 0;
    int num_guesses = 5;
    time_t t;

    // intialize random number generator
    srand((unsigned) time(&t));

    // get random number
    random_number = rand() % 21;

    // display prompt
    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 20, which you must guess. \n");

    // enter loop
    while (num_guesses > 0) {
        printf("\nYou have %d tr%s remaining.", num_guesses, num_guesses == 1 ? "y" : "ies");
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
            printf("\nSorry, %d is wrong. My number is less than that.", guess);
        }

        --num_guesses;
    }

    printf("\nYou have had five tries and failed. The number was %d.\n", random_number);

    return 0;
}
