/*Write the program so that it prints the reversal of a three-digit number with out using arithmetic to split the number in to digits */

#include<stdio.h>

int main()
{
    int num1, num2,num3, rev_num;
    printf("enter the first 3 digit \n");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("The number is %d%d%d\n",num3,num2,num1);
    return 0;
}