#include<stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter the fractions to add in frac1 + frac2 \n");
    scanf("%d/%d+%d/%d",&num1, &denom1, &num2, &denom2);
    result_num = num1*denom2 + num2*denom1;
    result_denom = denom1*denom2;
    printf("The result = %d/%d\n", result_num, result_denom);
    return 0;

}