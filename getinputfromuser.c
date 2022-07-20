#include <stdio.h>
#include <stdlib.h>

// input from user for integer
int main()
{
    

    // int age;
    //  printf("enter your age: ");
    //  scanf("%d", &age);
    //  printf("you are %d \n" ,age);


    // // input from user for double
    //  double value ;
    //  printf("enter your value: ");
    //  scanf("%lf", &value);
    //  printf("you are %f \n" ,value ); 

     // 

    //  char grade ;
    //  printf("enter you grade: ");
    //  scanf("%c", &grade);
    //  printf("you grade is %c \n" ,grade );

    // the scanf does not recognize any input after a space but we can use an fget function
    //   char name[20];
    //   printf("enter you name: ");
    //   scanf("%s", name);
    //   printf("you name in %s \n" ,name );

    // the fget function
       char name[20];
       printf("enter you name: \n");
       fgets(name,20,stdin);
       printf("you name is %s \n" ,name );


    return 0;

}