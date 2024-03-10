#include<stdio.h>
int main()
{
    int num, hun, ten, unit, rev_num;
    printf("Enter the 3 digit number \n");
    scanf("%d",&num);
    hun = num /100;
    ten = num % 100/10;
    unit = num % 10;
    rev_num = unit*100 + ten*10 + hun*1;
    printf("Reversed number is %d \n", rev_num);
    return 0;
}