#include <stdio.h>
int main()

{
int a;
int b;
printf("Enter the first number\n");
scanf("%d", &a);

printf("Enter the second number\n");
scanf("%d", &b);

if(a==b){printf("result is %d=%d",a,b);}
else if(a>b){printf("result is %d>%d",a,b);}
else{printf("result is %d>%d", b,a);}
return 0;
}
