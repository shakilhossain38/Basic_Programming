#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
char ch1,ch2,a;

printf("Enter your name:");
scanf("%c", &ch1);

fflush(stdin);

printf("Enter your lover name:");
scanf("%c", &ch2);

a=(ch1+ch2-40)%100+20;

if (a>=90 && a<100)
{printf("love percentage is:%d percent",a);
printf("\nMade for each other");}

else printf("%d percent,wow great love!!!",a);

getch();
}
