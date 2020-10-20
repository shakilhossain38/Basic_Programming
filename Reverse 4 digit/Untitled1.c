#include <stdio.h>
int main()

{
int num,d1,d2,d3,d4;
printf("Enter four digit number\n");
scanf("%d", &num);

d1=num%10;
d2=(num/10)%10;
d3=(num/100)%10;
d4=(num/1000)%10;

if(num>9 && num<99)
{printf("The reverse is %d%d", d1,d2);}

else if(num>99 && num<1000)
{printf("the reverse is %d%d%d", d1,d2,d3);}

else if(num>999 && num<10000)
{printf("the reverse is %d%d%d%d", d1,d2,d3,d4);}

else {printf("no reverse");}
return 0;
}
