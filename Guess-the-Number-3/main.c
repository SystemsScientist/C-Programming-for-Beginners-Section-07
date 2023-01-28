/*
    Author: Matt Johnson
    Subject: challenge and demonstration
    Purpose: program guesses a number
    Date: 01/28/2023

    Notes:

        1. program uses a while loop instead of a for loop
        2. program uses a different design than Guess the Number
           and Guess the Number 2 programs
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int test_number = 0;
    int counter = 5;
    time_t t;

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20, which you must guess.\n");

    srand((unsigned) time(&t));
    int random_number = rand() % 21;

    while (counter <= 5) {
        if (counter == 0) {
            printf("\nSorry, you have no more attempts.\n");
            printf("Please pay again.\n");
            break;
        } else {
            printf("\nYou have %d tr%s remaining.", counter, counter == 1 ? "y" : "ies");
            printf("\nEnter a guess: ");
            scanf("%d", &test_number);

            if (test_number < random_number) {
                printf("Sorry, %d is wrong. My number is more than that.\n", test_number);
            } else if (test_number > random_number) {
                printf("Sorry, %d is wrong. My number is less than that.\n", test_number);
            } else if (test_number < 0) {
                printf("Sorry, %d is less than 0, which is an invalid number.\n", test_number);
            } else if (test_number > 20) {
                printf("Sorry, %d is more than 20, which is an invalid number.\n", test_number);
            } else {
                printf("\nCongratulations! You guessed it!\n");
                break;
            }
        }
        counter--;
    }

    return 0;
}
