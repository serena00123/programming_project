#include <stdio.h>
#define NAIRA_RATE 740

/*
 * File: pro_4.c
 * Auth: Gbenga Elegbedd
 */

/* Progran that converts dollars to nairas*/

int main(void)
{
int dollars, naira_equivalent; 
	
printf("enter amount in US dollars: \n");
scanf("%d", &dollars);

naira_equivalent = dollars * NAIRA_RATE;
printf("The naira equivalent is: #%d\n", naira_equivalent);

return (0);

}

