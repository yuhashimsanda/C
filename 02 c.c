#include <stdio.h>
#include <stdlib.h>

int main()
{
int choice;
float no1,no2,result;
printf("Simple Menu Driven Calculator \n");
printf("1. Addition \n");
printf("2. Substraction \n");
printf("3. Multipication \n");
printf("4. Division \n");
printf("Enter Your Choice [1-4]: \n");
scanf("%d", &choice);
printf("Enter First Number ");
scanf("%f", &no1);
printf("Enter Second Number ");
scanf("%f", &no2);
switch(choice)
{
case 1:
result=no1+no2;
printf("%.2f \n", result);
break;
case 2:
result=no1-no2;
printf("%.2f \n", result);
break;
case 3:
result=no1*no2;
printf("%.2f \n", result);
break;
case 4:
if(no2 != 0)
{
result=no1/no2;
printf("%.2f \n", result);
}
else
{
printf("Can Not Be Devided \n");
}
break;
default:
printf("Invalid Choice \n");
break;
}
return 0;
}
