#include <stdio.h>
#define PI 3.14159F
#define SCALE_FACTOR (4.0f / 3.0f)

/*
 * File: pro_2.c
 * Auth: Gbenga Elegbede
 */

int main(void)
{
  float volume, radius;
  printf("Please enter the radius of a sphere: \n");
  scanf("%f", &radius);
  printf("radius * 3 = %.1f\n", radius * radius * radius);
  printf("scale_factor = %.1f\n", SCALE_FACTOR);

  volume = SCALE_FACTOR * PI * radius * radius * radius;
  printf("Volume = %.1f\n", volume);

  return (0);
}  
