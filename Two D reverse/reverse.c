/*Write a program which will reverse up to two digit integer number */

#include <stdio.h>
int main()
{
int num;
int dig1, dig2;

printf("Enter a two digit integer number:");
scanf("%d", &num);

dig1= num%10;
dig2=num/10;

if(num>9 && num<99)

printf("The reverse number is: %d%d", dig1,dig2);

return 0;
}
