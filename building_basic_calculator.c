#include <stdio.h>
#include <stdlib.h>

int main(){

int num1;
int num2;

printf("enter value: ");
scanf("%d", &num1);
printf("enter value: ");
scanf("%d", &num2);
printf("ans= %d \n",num1+num2);

double num3;
double num4;

printf("enter value: ");
scanf("%lf", &num3);
printf("enter value: ");
scanf("%lf", &num4);
printf("ans= %.2f",num3+num4);

return 0;

}
