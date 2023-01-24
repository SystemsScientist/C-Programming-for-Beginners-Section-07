/*
    Author: Matt Johnson
    Subject: while and do-while loops
    Purpose: program while loop to calculate sum
    Date: 01/24/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    unsigned int sum = 0;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum: ");
    scanf("%u", &count);

    // implements while loop instead of for loop for same output,
    // see For-Loop directory, main.c file for alternative solution
    unsigned int i = 1;
    while (i <= count) { // pre-test
        sum += i;
        ++i;
    }

    printf("\nWhile loop:");
    printf("\nTotal of the first %u number is %u\n", count, sum);

    // why is the do-while output different?
    do {
        sum += i;
        ++i;
    } while (i <= count); // post-test

    printf("\nDo-While loop: ");
    printf("\nTotal of the first %u number is %u\n", count, sum);

    return 0;
}
