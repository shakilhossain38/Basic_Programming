/*Write a program which will take some information from user
displaying the information*/

#include <stdio.h>
#include<stdlib.h>

int main()
{

int age;
float gpa;
char gen;

printf("Enter the age\n");
scanf("%d", &age);

printf("Enter the gpa\n");
scanf("%f", &gpa);

fflush(stdin);

printf("Enter gender\n");
scanf("%c", &gen);

printf("age is %d\n", age);
printf("gpa is %f\n", gpa);
printf("gen is %c\n", gen);

return 0;
}
