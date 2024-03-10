/* Write a program that reads an integer entered by the user and convert the same to octal*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    printf("The octal numer = %o \n", num);
    return 0;
}