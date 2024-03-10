#include<stdio.h>
int main()
{
    int num, rev_num, tenth, unit;
    printf("Enter the two digit number \n");
    scanf("%d",&num);
    tenth = num / 10;
    unit = num % 10;
    rev_num = unit*10 + tenth;
    printf("the reverse number is %d \n",rev_num);
    return 0;
}