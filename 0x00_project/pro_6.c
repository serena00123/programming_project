#include <stdio.h>
/*
 * File - pro_6.c
 * Auth: Gbenga Elegbede
 */

/**
 * main - entry point
 * Description: program tha convert date format
 *
 * Return: (0);
 */

int main(void)
{
int day, month, year;
printf("Please enter a date (mm/dd/yyyy):\n");
scanf("%2d%2d%4d", &month, &day, &year);
printf("You entered the date: %.4d%.2d%.2d\n", year, month, day);
return (0);
}
