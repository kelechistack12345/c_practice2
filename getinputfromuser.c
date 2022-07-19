#include <stdio.h>
#include <stdlib.h>
// input from user for integer
int main()
{
    int age;
    double value;
    char grade ;

    printf("enter your age: ");
    scanf("%d", &age);
    printf("you are %d: \n" ,age);


    // input from user for double
    printf("enter your value: ");
    scanf("%lf", &value);
    printf("you are %f: \n" ,value );

   

    // input and print character 
    printf("enter your grade: \n");
    scanf("%c", &grade);
    printf("you are %c:" ,grade);

    

    return 0;

}