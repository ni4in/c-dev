/* Using scanf to enter the fractions from the terminal as numerator/denominator.
*/

#include<stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter the first fraction \n");
    scanf("%d/%d",&num1, &denom1);
    printf("Enter the second fraction \n");
    scanf("%d/%d",&num2, &denom2);
    result_num = num1*denom2+num2*denom1;
    result_denom = denom1*denom2;
    printf("result = %d/%d \n",result_num, result_denom);
    return 0;

}