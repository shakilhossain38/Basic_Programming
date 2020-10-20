/*Write a program which will guess a number between 1-99then ask
maximum six questions to output the guessed number*/
#include<stdio.h>
#include<conio.h>

int main()
{
int a,b;
printf("please guess a number..");
printf("\n\nnow think I give you 10..");
printf("\n\nnow multiply it by 2..");
printf("\n\nnow give back my 10..");
printf("\n\nnow make it half..");
printf("\n\nplease say the remain number:");
scanf("%d",&a);
b=a-5;
printf("\n\nYour guess number is:%d",b);
printf("\n\nthank you");
getch();
return 0;
}
