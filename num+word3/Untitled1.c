/*Write a program which will take up to three digit integer number and output in word*/

#include <stdio.h>

int main()
{
    int num,a,b,c;
    printf("Enter up to three digit integer number:\n");
    scanf("%d", &num);

    a=num/100;
    b=(num%100)/10;
    c=num%10;

    if(a==1){printf("one hundred ");}
    else if(a==2){printf("two hundred ");}
    else if(a==3){printf("three hundred ");}
    else if(a==4){printf("four hundred ");}
    else if(a==5){printf("five hundred ");}
    else if(a==6){printf("six hundred ");}
    else if(a==7){printf("seven hundred ");}
    else if(a==8){printf("eight hundred ");}
    else if(a==9){printf("nine hundred ");}


    if(b==1)
    {
    if(c==0) {printf("ten ");}
    else if(c==1) {printf("eleven ");}
    else if(c==2) {printf("twelve ");}
    else if(c==3) {printf("thirteen ");}
    else if(c==4) {printf("fourteen ");}
    else if(c==5) {printf("fifteen ");}
    else if(c==6) {printf("sixteen ");}
    else if(c==7) {printf("seventeen ");}
    else if(c==8) {printf("eighteen ");}
    else if(c==9) {printf("nineteen ");}
    }
    else
    {
    if(b==2){printf("twenty ");}
    else if(b==3){printf("thirty ");}
    else if(b==4) {printf("forty ");}
    else if(b==5) {printf("fifty ");}
    else if(b==6) {printf("sixty ");}
    else if(b==7) {printf("seventy ");}
    else if(b==8){printf("eighty ");}
    else if(b==9) {printf("ninety ");}

    if(c==1){printf("one ");}
    else if(c==2){printf("two ");}
    else if(c==3){printf("three ");}
    else if(c==4){printf("four ");}
    else if(c==5){printf("five ");}
    else if(c==6){printf("six ");}
    else if(c==7){printf("seven ");}
    else if(c==8){printf("eight ");}
    else if(c==9){printf("nine ");}
    }
  return 0;
}
