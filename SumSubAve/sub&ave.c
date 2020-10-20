/*Write a program which will take two integer number and output the
subtracted and average value*/

#include <stdio.h>
int main()

{
int num1;
int num2;
int sub;
int ave;

printf("Enter the first number\n");
scanf("%d", &num1);

printf("Enter the second number\n");
scanf("%d", &num2);

sub= num1 - num2;
ave=(num1 + num2)/2;
printf("sub is %d\n", sub);
printf("average is %d\n", ave);

return 0;
}
