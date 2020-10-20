#include <stdio.h>
int main()


{
int a,b,res;
char c;

printf("Enter an equation\n");
scanf("%d%c%d", &a,&c,&b);

if(c=='+')
{res=a+b;}

else if(c=='-')
{res=a-b;}

else if(c=='*')
{res=a*b;}

else
{res=a/b;}

printf("result is %d%c%d=%d",a,c,b,res);

return 0;

}
