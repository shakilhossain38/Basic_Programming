/*Write a program which will take two integer number and output the sum value*/

#include <stdio.h>
int main()
{

int integer1;
int integer2;
int sum,ave;

printf("Enter the first integer\n");
scanf("%d", &integer1);

printf("Enter the second integer\n");
scanf("%d", &integer2);

sum= integer1 + integer2;
printf("sum is %d\n", sum);
ave=((sum)/2)%150;
printf("per is %d", ave);
return 0;
}
