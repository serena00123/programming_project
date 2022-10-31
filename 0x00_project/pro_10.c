#include <stdio.h>

/*
 * File - pro
 * Auth: Gbenga Elegbede
 */

/**
 * main - Entry
 * Description: print a table of square
 *
 * Return: Always (0);
 */

int main(void)
{
int i, n;

printf("This program prints a table of square. \n");
printf("Enter number of entries in table: \n");
scanf("%d", &n);
i = 1;
while (i <= n)
{
printf("%10d%10d\n", i, i *i);
i++;
}
return (0);
}
