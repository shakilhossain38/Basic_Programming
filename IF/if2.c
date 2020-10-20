/*Write a program which will take number input and output a funny
message if the number is greater or less than 70 */

#include <stdio.h>
int main()
{
int num;

    printf("Enter a number\n");
    scanf("%d", &num);

if(num >= 70)
{
    printf("Hurray. You won the lottery");
}
else
{
    printf("Ahaa!! You missed this time");
}


return 0;

}
