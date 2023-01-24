/*
    Author: Matt Johnson
    Subject: for loop
    Purpose: uses for loop to calculate sum
    Date: 01/24/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    unsigned int sum = 0;  // stores the sum of the integers
    unsigned int count = 0;        // is the number of integers to be summed

    // read the number of integers to be summed
    printf("\nEnter the number of integers you want to sum: ");
    scanf("%u", &count);

    // sum integers from 1 to count
    unsigned int i;
    for (i = 1; i <= count; ++i)
        sum += i;

    // display count and sum
    printf("\nTotal of the first %u number is %u\n", count, sum);

    return 0;
}
