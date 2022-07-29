#include <stdio.h>
#include <stdlib.h>


int max(int num1,int num2,int num3){

    int result;

     if (num1 >= num2 && num1 >= num3){
        result  =num1;
     }
     else if (num2 >= num1 && num2 >= num3)
     {
        result = num2;
     }
     else {
        result = num3;

     }
     
     return result;

}






int main(){

    // if(3!=2) to check if 3 is not equal t0 2.
    // if (3==2) to check if 3 is equal to 2.
    // if(!(3<2)) to negate an opretor this means to do the opposit of any operator


    if (3<2 || 2>5){

        printf("true \n");
        
    }
    else{
        
        printf("false \n");

    }

    printf("my answer is %d",max(10,20,30));

}