/* Write a program to compute the check digit for an arbitary upc from the 11 digits a user enter. User has to enter the number in 3 parts
check digit algorithm :
1. add the first, thrid, fifth, seventh, ninth and eleventh digits
2. Add the second , fourth, sixth, eight and tenth digits
3. Multiply the first sum by 3 and add it to the second sum
4. Compute the reaminder when the adjusted total is divided by 10
5. Subtract the remainder from 9
The program should work as follows : 
Enter the first digit : 0
Enter the first group of five digits : 13800
Enter the second group of five digits : 15173
check digit: 5
*/
#include<stdio.h>
int main()
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total, chk_digit;

    printf("Enter the first single digit: ");
    scanf("%1d", &d);
    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second group of 5 digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    first_sum = d+i2+i4+j1+j3+j5;
    second_sum = i1+i3+i5+j2+j4;
    total = 3 * first_sum + second_sum;
    chk_digit = 9 - ((total-1)%10);
    printf("Check digit : %d \n", chk_digit);
    return 0;
}