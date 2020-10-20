#include <stdio.h>
int main()
{
int a,b,c,d;

printf("Enter a number\n");
scanf("%d", &a);

b=a/365;
printf("%d years\t", b);

c=(a%365)/7;
printf("%d weeks\t", c);

d=(a%365)%7;
printf("%d days", d);

return 0;
}
