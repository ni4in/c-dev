#include<stdio.h>

int main()
{
    int num1, num2, den1, den2, num_sum, num_den;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d + %d/%d",&num1,&den1,&num2,&den2);
    num_sum = num1*den2+num2*den1;
    num_den = den1*den2;
    printf("The sum is given by: %d/%d \n",num_sum, num_den);
    return 0;
}