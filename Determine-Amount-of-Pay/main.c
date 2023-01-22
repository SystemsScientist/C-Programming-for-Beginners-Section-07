/*
    Author: Matt Johnson
    Subject: challenge and demonstration
    Purpose: program calculates weekly pay
    Date:  01/22/2023

    Instructions:

        1. program should ask the user to enter the number
           of hourse worked in a week via the keyboard
        2. program should display as output the gross pay,
           the taxes, and the net pay
        3. program should make the following assumptions:
                - basic pay rate equals $12.00 per hour
                - overtime (in excess of 40 hours) is time
                  and a half
                - tax rate
                    + 15% for the first $300
                    + 20% for the next $150
                    + 25% for the rest
*/

#include <stdio.h>
#include <stdlib.h>

// constants
#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main(void) {

    // declare and initialize variables
    int hours = 0;
    double gross_pay = 0.0;
    double taxes = 0.0;
    double net_pay = 0.0;

    // get input
    printf("Please enter the number of house worked this week: ");
    scanf("%d", &hours);

    // calculate gross pay
    if (hours <= 40) {
        gross_pay = hours * PAYRATE;
    } else {
        gross_pay = 40 * PAYRATE;

        // initialize local variable
        double over_time_pay = (hours - 40) * (PAYRATE * 1.5);
        gross_pay += over_time_pay;
    }

    // calculate taxes
    if (gross_pay <= 300) {
        taxes = gross_pay * TAXRATE_300;
    } else if (gross_pay > 300 && gross_pay <= 450) {
        taxes = 300 * TAXRATE_300;
        taxes += (gross_pay - 300) * TAXRATE_150;
    } else {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (gross_pay - 450) * TAXRATE_REST;
    }

    // calculate netpay
    net_pay = gross_pay - taxes;

    // display output
    printf("\nYour gross pay this week is: $%.2f\n", gross_pay);
    printf("Your taxes this week is: $%.2f\n", taxes);
    printf("Your net pay this week is: $%.2f\n", net_pay);

    return 0;
}
