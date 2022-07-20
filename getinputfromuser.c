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


    printf("enter you grade: ");
    scanf("%c", &grade);
    printf("you grade in %c: \n" ,grade );

   

    return 0;

}