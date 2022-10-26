#include <stdio.h>

/*
 * File - pro_8.c
 * Auth: Gbenga Elegbede
 */

/**
 * main - Entry point
 * Description: print 3 digits
 * Return: Always (0);
 */
int main(void)
{
int number;
printf("Enter a number: \n");
scanf("%d", &number);
if (number >= 0 && number <= 9)
{
printf("The number %d has 1 digits\n", number);
}
else if (number >= 10 && number <= 99)
{
printf("The number %d has 2 digits\n", number);
}
else if (number >= 100 && number <= 999)
{
printf("The number %d has 3 digits\n", number);
}
else if (number >= 1000 && number <= 9999)
{
printf("The number %d has 4 digits\n", number);
}
else
{
printf("The number out of range\a\n");
}
return (0);
}
