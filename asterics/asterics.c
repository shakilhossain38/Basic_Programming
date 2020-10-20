
#include <stdio.h>
#include <conio.h>
int main()
{
char c1,c2,c3,p1,p2,p3;
printf("Enter three digit password\n");

c1=getch();
printf("*");

c2=getch();
printf("*");

c3=getch();
printf("*\n");

printf("Re-enter password\n");

p1=getch();
printf("*");

p2=getch();
printf("*");

p3=getch();
printf("*\n");

if(c1==p1 && c2==p2 && c3==p3)
{
    printf("Password Matched");
}


else {printf("Wrong Password");}
return 0;
}
