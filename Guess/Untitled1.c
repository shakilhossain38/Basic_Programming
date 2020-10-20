#include <stdio.h>
int main()
{
int input,output;
printf("lets play a game.\n");
printf("Take a 2 digit integer number.\n");
printf("Multiply it by 5\n");
printf("Multiply again by 2.\n");
printf("Now add 7\n");
printf("subtract by 2.\n");
printf("tell the number.\n");
scanf("%d", &input);
output=(input-5)/10;
printf("your guessed number is %d", output);
return 0;
}
