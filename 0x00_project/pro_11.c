#include <stdio.h>
/*
 * file - pro_11.c
 * Auth: Gbenga Elegbede
 */

/**
 * main - Entry
 * Description: sum a series of numbers
 *
 * Return: Always (0);
 */

int main(void)
{
int n, sum = 0;
printf("This program sum a series of integers. \n");
printf("Enter integers (0 to terminate): ");
scanf("%d", &n);

while (n != 0)
{
sum += n;
scanf("%d", &n);
}
printf("The sum is: %d\n", sum);
return (0);
}

