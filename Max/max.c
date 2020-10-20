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

if (b>=a && b>=c)
{
printf("The maximum number is %d\n", b);
}

if(c>=a && c>=b)
{
printf("The maximum number is %d\n", c);
}

return 0;
}
