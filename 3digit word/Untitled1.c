/*Write a program which will take up to three digit integer number and output in word*/

#include <stdio.h>
int main()

{
int num,d1,d2,d3;

printf("Enter Three Digit Number\n");
scanf("%d", &num);

d1=(num/100)%10;
d2=(num/10)%10;
d3=num%10;

if (d1==1){printf("One ");}
else if (d1==2){printf("Two ");}
else if (d1==3){printf("Three ");}
else if (d1==4){printf("FOUR ");}
else if (d1==5){printf("Five ");}
else if (d1==6){printf("Six ");}
else if (d1==7){printf("Seven ");}
else if (d1==8){printf("Eight ");}
else if (d1==9){printf("Nine ");}
else {printf("Zero ");}

if(d2==1){printf("One ");}
else if (d2==2){printf("Two ");}
else if (d2==3){printf("Three ");}
else if (d2==4){printf("FOUR ");}
else if (d2==5){printf("Five ");}
else if (d2==6){printf("Six ");}
else if (d2==7){printf("Seven ");}
else if (d2==8){printf("Eight ");}
else if (d2==9){printf("Nine ");}
else {printf("Zero ");}

if(d3==1){printf("one ");}
else if (d3==2){printf("Two ");}
else if (d3==3){printf("Three ");}
else if (d3==4){printf("FOUR ");}
else if (d3==5){printf("Five ");}
else if (d3==6){printf("Six ");}
else if (d3==7){printf("Seven ");}
else if (d3==8){printf("Eight ");}
else if (d3==9){printf("Nine ");}
else {printf("Zero ");}

return 0;

}
