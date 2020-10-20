/*Write a program which will take a student marks
and output on the basis of given table*/

#include <stdio.h>
int main()

{
int num;

printf("Enter the two digit Number\n");
scanf("%d", &num);

if(num>=80)
{
printf("Excellent");
}


else if(num>=70 && num<80)
{
printf("very Good");
}

else if(num>=60 && num<70)
{
printf("Good");
}

else if(num>=55 && num<60)
{
printf("Average");

}

else
{
printf("Fail");
}

return 0;
}
