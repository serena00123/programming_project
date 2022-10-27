#include <stdio.h>
/*
 * File - pro_9.c
 * Auth: Gbenga Elegbede
 */

/**
 * main - Entry point
 * Description: print grade and labels
 * Return: Always (0);
 */

int main(void)
{
int numerical_grade;
printf("Enter numerical grade: \n");
scanf("%d", &numerical_grade);

printf("Letter grade:  ");

if (numerical_grade > 100)
{
printf("Error\a\n");
}
else if (numerical_grade < 0)
{
printf("Error\a\n");
}
else
{
switch (numerical_grade / 10)
{
/* scores betwee 90 - 100 */
case 10:
case 9:
printf("A\n");
break;
/* scores betwee 80 - 89 */
case 8:
printf("B\n");
break;
/* scores betwee 70 - 79 */
case 7:
printf("C\n");
break;
/* scores betwee 60 - 69 */
case 6:
printf("D\n");
break;
/* scores betwee 0 - 59 */
default:
printf("F\n");
break;
}
}
getchar();
return (0);

}
