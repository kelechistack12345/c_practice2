#include <stdio.h>
#include <stdlib.h>

int max( int num1,int num2)
{

    int result;

    if (num1 < num2)
    {
    result = num1;
    }
    else
    {
    result = num2;
    }
    return result;



}






int main(){

    printf("answer is %d" ,max(10,4));


}