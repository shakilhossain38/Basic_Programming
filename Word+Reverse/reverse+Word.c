#include <stdio.h>
int main()

{
int num,d1,d2;

printf("Enter Two Digit Number\n");
scanf("%d", &num);
d1=num%10;
d2=num/10;

if(d1==1)
{printf("One\n");}

else if (d1==2)
{printf("Two\n");}

else if (d1==3)
{printf("Three\n");}

else if (d1==4)
{printf("FOUR\n");}

else if (d1==5)
{printf("Five\n");}

else if (d1==6)
{printf("Six\n");}

else if (d1==7)
{printf("Seven\n");}

else if (d1==8)
{printf("Eight\n");}

else if (d1==9)
{printf("Nine\n");}

else
{printf("Zero\n");}

if(d2==1)
{printf("One\n");}

else if (d2==2)
{printf("Two\n");}

else if (d2==3)
{printf("Three\n");}

else if (d2==4)
{printf("FOUR\n");}

else if (d2==5)
{printf("Five\n");}

else if (d2==6)
{printf("Six\n");}

else if (d2==7)
{printf("Seven\n");}

else if (d2==8)
{printf("Eight\n");}

else if (d2==9)
{printf("Nine\n");}

else
{printf("Zero\n");}

return 0;

}
