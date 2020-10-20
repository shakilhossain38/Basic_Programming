#include <stdio.h>
int main()
{
int sl;
float quan,to,pri;

printf("Welcome to grocery shop\n");
printf("Please select your choice\n");
printf("sl  product price\n");
printf("01   rice    50\n");
printf("02   dal     100\n");
printf("03   tomato   45\n\n");
printf("03   potato   45\n\n");


scanf("%d", &sl);

switch(sl)
{
    case 1:
    printf("enter the quantity\n");
    scanf("%f", &quan);
    pri=50;
    to=quan*pri;
    printf("total bill is %f",to);
    break;

    case 2:
    printf("enter the quantity\n");
    scanf("%f", &quan);
    pri=100;
    to=quan*pri;
    printf("total bill is %f",to);
    break;

    case 3:
    printf("enter the quantity\n");
    scanf("%f", &quan);
    pri=45;
    to=quan*pri;
    printf("total bill is %f",to);
    break;

    case 4:
    printf("enter the quantity\n");
    scanf("%f", &quan);
    pri=50;
    to=quan*pri;
    printf("total bill is %f",to);
    break;


    default:
    printf("\nSorry wrong input");
}

return 0;

}
