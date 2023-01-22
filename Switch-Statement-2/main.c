/*
    Author: Matt Johnson
    Subject: switch statement
    Purpose: program demonstrates a switch statement
    Date: 01/22/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float value1, value2;
    char arithmetic_operator;

    printf("Type in your expression: ");
    scanf("%f %c %f", &value1, &arithmetic_operator, &value2);

    switch (arithmetic_operator) {

        case '+':
            printf("%.2f\n", value1 + value2);
            break;
        case '-':
            printf("%.2f\n", value1 - value1);
            break;
        case '*':
            printf("%.2f\n", value1 * value2);
            break;
        case '/':
            if (value2 == 0)
                printf("Division by zero.\n");
            else
                printf("%.2f\n", value1 / value2);
            break;
        default:
            printf("Unknown operator.\n");
            break;
    }

    return 0;
}
