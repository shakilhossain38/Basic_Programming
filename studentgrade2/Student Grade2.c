#include<stdio.h>
int main()
{
int a;
int b;
int c;

printf("Enter Bangla marks\n");
scanf("%d", &a);

printf("Enter English marks\n");
scanf("%d", &b);

printf("Enter Mathematics marks\n");
scanf("%d", &c);
printf("ID\tSubject Name\tMarks\tGrade\n");

if(a<55){printf("1.\tBangla\t\t%d\tFail\n", a);}
else if (a>=55 && a<70) {printf("1.\tBangla\t\t%d\tAverage\n", a);}
else {printf("1.\tBangla\t\t%d\tGood\n", a);}

if(b<55){printf("2.\tEnglish\t\t%d\tFail\n", b);}
else if (b>=55 && b<70) {printf("2.\tEnglish\t\t%d\tAverage\n", b);}
else {printf("2.\tEnglish\t\t%d\tGood\n", b);}


if(c<55){printf("3.\tMath\t\t%d\tFail\n", c);}
else if (c>=55 && c<70) {printf("3.\tMath\t\t%d\tAverage\n", c);}
else {printf("3.\tMath\t\t%d\tGood\n", c);}

return 0;

}
