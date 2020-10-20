
#include <stdio.h>
#include <conio.h>
int main()
{
char ch1,ch2;
printf("Enter five digit password\n");

ch1=getch();
printf("*");

ch1=getch();
printf("*");

ch1=getch();
printf("*");

ch1=getch();
printf("*");

ch1=getch();
printf("*\n");

fflush(stdin);

printf("Re-enter the password\n");

ch2=getch();
printf("*");

ch2=getch();
printf("*");

ch2=getch();
printf("*");

ch2=getch();
printf("*");

ch2=getch();
printf("*\n");

if(ch1==ch2)
{
    printf("Correct\n");
}

else
{
   printf("Forget password or Email\n");
}
return 0;
}
