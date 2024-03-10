#include<stdio.h>
int main(void)
{
  int length, width, height, volume, weight;
  height=8, length=12, width=10;
  volume=height*width*length;
  weight=(volume+165)/166; //165cc = 1 pound. adding 165 for handling truncation
  printf("dimension is : %dx%dx%d \n",length, width, height);
  printf("volume is :%d\n", volume);
  printf("weight is : %d\n", weight);
  return 0;
}
