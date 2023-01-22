/*
    Author: Matt Johnson
    Subject: switch statement
    Purpose: program
    Date: 01/22/2023

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Thursday;

    switch (today) {

        case Sunday:
            printf("Today is Sunday.\n");
            break;
        case Monday:
            printf("Today is Monday.\n");
            break;
        case Tuesday:
            printf("Today is Tuesday.\n");
            break;
        default:
            printf("Whatever!\n");
            break;
    }

    return 0;
}
