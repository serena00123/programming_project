#include <stdio.h>
#define SCALE_FACTOR (1.0f / 1200.0f)

/*
 * File: pro_5.c
 * Auth: Gbenga Elegbede
 */

/* Program that calculates the remaining balance on a loan after the first, second, and third monthly payment */

int main(void)
{
float loan, interest_rate, monthly_payment, balance_first_payment, balance_second_payment, balance_third_payment;
	
	
printf("Enter amount of loan in $: \n");
scanf("%f", &loan);
printf("Enter interest rate: \n");
scanf("%f", &interest_rate);
printf("Enter monthly payment: \n");
scanf("%f", &monthly_payment);

balance_first_payment = loan - (monthly_payment - interest_rate * loan * SCALE_FACTOR);
printf("Balance remaining after first payment: $%.2f\n", balance_first_payment);
balance_second_payment = balance_first_payment - (monthly_payment - interest_rate * balance_first_payment * SCALE_FACTOR);
printf("Balance remaining after second payment: $%.2f\n", balance_second_payment);
balance_third_payment = balance_second_payment - (monthly_payment - interest_rate * balance_second_payment * SCALE_FACTOR);
printf("Balance remaining after third payment: $%.2f\n", balance_third_payment);

return (0);

}


