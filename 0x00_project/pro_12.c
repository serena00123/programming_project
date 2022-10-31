#include <stdio.h>


int main(void)
{
int n, sum = 0;
printf("Enter integers: \n");
scanf("%d", &n);
while (n > 0)
{
sum += n;
scanf("%d", &n);
}
if (n < 0)
{
printf("The sum is %d\n", sum);
}

return (0);
}
