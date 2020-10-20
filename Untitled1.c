#include <stdio.h>
int main()

{
int a,b,c,res;
char c1,c2;

printf("Enter an equation\n");
scanf("%d%c%d%c%d", &a,&c1,&b,&c2,&c);

if(c1=='+' && c2=='+')
{res=a+b+c;}

else if(c1=='+' && c2=='-')
{res=a+b-c;}

else if(c1=='+' && c2=='*')
{res=a+b*c;}

else if(c1=='+' && c2=='/')
{res=a+b/c;}

else if(c1=='-' && c2=='-')
{res=a-b-c;}

else if(c1=='-' && c2=='+')
{res=a-b+c;}

else if(c1=='-' && c2=='*')
{res=a-b*c;}

else if(c1=='-' && c2=='/')
{res=a-b/c;}

else if(c1=='*' && c2=='*')
{res=a*b*c;}

else if(c1=='*' && c2=='+')
{res=a*b+c;}

else if(c1=='*' && c2=='-')
{res=a*b-c;}

else if(c1=='*' && c2=='/')
{res=a*b/c;}

else if(c1=='/' && c2=='/')
{res=a/b/c;}

else if(c1=='/' && c2=='*')
{res=a/b*c;}

else if(c1=='/' && c2=='+')
{res=a/b+c;}

else
{res=a/b-c;}

printf("result is %d%c%d%c%d=%d",a,c1,b,c2,c,res);

return 0;

}
