/*Rewrite the upc.c program so that user enters 11 digits at one time*/

#include<stdio.h>
int main()
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11,odd_sum, even_sum,total, check_digit;
    printf("Enter the 11 digit number : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10,&d11);
    odd_sum = d1 + d3 + d5 + d7 + d9 + d11;
    even_sum = d2 + d4 + d6 + d8 + d10;
    total = 3*odd_sum + even_sum;
    check_digit = 9-((total-1)%10);
    printf("Check Digit: %d \n", check_digit);
    return 0;
}