#include <stdio.h>
#define TAX_ADDED (5.00f / 100.00f)

/*
 * File: pro_3
 * Auth: Gbenga Elegbede
 */

int main(void)
{
float dollars_and_cents, with_tax_added;
printf("Please enter an amount: \n");
scanf("%f", &dollars_and_cents);

with_tax_added = dollars_and_cents * TAX_ADDED + dollars_and_cents;
printf("With tax added:$%.2f\n", with_tax_added);

return (0);
}

