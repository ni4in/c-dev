#include<stdio.h>
int main(void)
{
    int dd, mm, yy;
    printf("Enter the date in dd-mm-yy format \n");
    scanf("%d-%d-%d",&dd, &mm, &yy);
    printf("date = %0.2d/%0.2d/%0.2d \n",dd,mm,yy);
    return 0;
}