#include<stdio.h>
int main(void)
#define FREEZING_PT 32.0f 
#define SCALE_FACTOR (5.0f/9.0f)
{
  float celsius, fahrenheit;
  printf("Enter fahrenheit temperature : ");
  scanf("%f",&fahrenheit);
  celsius = (fahrenheit - FREEZING_PT)*SCALE_FACTOR;
  printf("celsius : %0.2f \n", celsius);
  return 0;
  
}
