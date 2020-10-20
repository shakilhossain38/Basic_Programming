#include <stdio.h>
int main()
{
int num,a,b,c;
printf("Enter a three digit integer number\n");
scanf("%d", &num);

a=num/100;
if(a==1) {printf("One hundred\n");}
else if(a==2){printf("two hundred\n");}
else if(a==3){printf("three hundred\n");}
else if(a==4){printf("four hundred\n");}
else if(a==5){printf("five hundred\n");}
else if(a==6){printf("six hundred\n");}
else if(a==7){printf("seven hundred\n");}
else if(a=8){printf("eight hundred\n");}
else if(a==9){printf("nine hundred\n");}

b=num%100;
if(b>=20 && b<30) {printf("twenty\n");}
else if(b>=30 && b<40) {printf("thirty\ ");}
else if(b>=40 && b<50) {printf("forty\n");}
else if(b>=50 && b<60) {printf("fifty\n");}
else if(b>=60 && b<70) {printf("sixty\n");}
else if(b>=70 && b<80) {printf("seventy\n");}
else if(b>=80 && b<90) {printf("eighty\n");}
else if(b>=90 && b<100) {printf("ninety\n");}
else if(b==11){printf("eleven\n");}
else if(b==12){printf("twelve\n");}
else if(b==13){printf("thirteen\n");}
else if(b==14){printf("fourteen\n");}
else if(b==15){printf("fifteen\n");}
else if(b==16){printf("sixteen\n");}
else if(b==17){printf("seventeen\n");}
else if(b==18){printf("eighteen\n");}
else if(b==19){printf("nineteen\n");}

c=b%10;
if(b<10 && b>=20);
else if(c==1){printf("one\n");}
else if(c==2){printf("two\n");}
else if(c==3){printf("three\n");}
else if(c==4){printf("four\n");}
else if(c==5){printf("five\n");}
else if(c==6){printf("six\n");}
else if(c==7){printf("seven\n");}
else if(c==8){printf("eight\n");}
else if(c==9){printf("nine\n");}

getch();

return 0;
}
