#include <stdio.h>
#include <stdlib.h>


void sayhi(char name[],int age);

// you have to call your function from your int main function
int main()
{
    printf("top   ",40);
    sayhi("mike");
    printf("  buttom  ");
    sayhi("oscar",60);

 

    return 0;
}


// void does not return any value
void sayhi(char name[],int age)
{
    
    printf("hello %s,you are %d",name,age);

}

