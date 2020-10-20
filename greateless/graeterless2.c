#include<stdio.h>
int main()
{
int a;
int b;
printf("Enter first number\n");
scanf("%d", &a);
printf("Enter second number\n");
scanf("%d", &b);

if(a!=b)
{
if(a>b){printf("a is greater than b");}
else {printf("b is greater than a");}
}
else {printf("a is equal to b");}
return 0;
}
