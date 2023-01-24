/*
    Author: Matt Johnson
    Subject: nested loops and loop control
    Purpose: program ...
    Date: 01/24/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n---------------------------\n\n");

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
