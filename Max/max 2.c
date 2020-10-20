/*Writ a program which will take 3 numbers input and
output the maximum number among them*/

#include <stdio.h>
int main()

{
int a;
int b;
int c;
printf("Enter the first number\n");
scanf("%d", &a);

printf("Enter the second number\n");
scanf("%d", &b);

printf("Enter the third number\n");
scanf("%d", &c);

if(a>=b && a>=c)
{
printf("The maximum number is %d\n", a);
}

else if (b>=c)
{
printf("The maximum number is %d\n", b);
}

else
{
printf("The maximum number is %d\n", c);
}

return 0;
}
