#include <stdio.h>
int main()
{
int num,a,b,c,d;

printf("Enter up to four digit integer number:\n");
scanf("%d",&num);

a=num/1000;
b=(num%1000)/100;
c=(num/10)%10;
d=num%10;

if(a==1){printf("one thousand ");}
else if(a==2){printf("two thousand ");}
else if(a==3){printf("three thousand ");}
else if(a==4){printf("four thousand ");}
else if(a==5){printf("five thousand ");}
else if(a==6){printf("six thousand ");}
else if(a==7){printf("seven thousand ");}
else if(a==8){printf("eight thousand ");}
else if(a==9){printf("nine thousand ");}


if(b==1){printf("one hundred ");}
else if(b==2){printf("two hundred ");}
else if(b==3){printf("three hundred ");}
else if(b==4){printf("four hundred ");}
else if(b==5){printf("five hundred ");}
else if(b==6){printf("six hundred ");}
else if(b==7){printf("seven hundred ");}
else if(b==8){printf("eight hundred ");}
else if(b==9){printf("nine hundred ");}


if(c==1)
{
if(d==0){printf("ten ");}
else if(d==1){printf("eleven ");}
else if(d==2){printf("twelve ");}
else if(d==3){printf("thirteen ");}
else if(d==4){printf("fourteen ");}
else if(d==5){printf("fifteen ");}
else if(d==6){printf("sixteen ");}
else if(d==7){printf("seventeen ");}
else if(d==8){printf("eighteen ");}
else if(d==9){printf("nineteen ");}
}
else
{
if(c==2){printf("twenty ");}
else if(c==3){printf("thirty ");}
else if(c==4){printf("forty ");}
else if(c==5){printf("fifty ");}
else if(c==6){printf("sixty ");}
else if(c==7){printf("seventy ");}
else if(c==8){printf("eighty ");}
else if(c==9){printf("ninety ");}

if(d==1){printf("one ");}
else if(d==2){printf("two ");}
else if(d==3){printf("three ");}
else if(d==4){printf("four ");}
else if(d==5){printf("five ");}
else if(d==6){printf("six ");}
else if(d==7){printf("seven ");}
else if(d==8){printf("eight ");}
else if(d==9){printf("nine ");}
}
if(num==0){printf("zero");}

return 0;

}
