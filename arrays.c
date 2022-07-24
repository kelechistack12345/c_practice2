#include <stdio.h>
#include <stdlib.h>

// an array helps you save multiple number in a varaible
// and you can identify numbers with index number

int main(){

    int luckynumbers[]={4,8,15,16};
    printf("%d \n",luckynumbers[1]);

    // changing your value in your array
    luckynumbers[1]=200;
    printf("%d \n",luckynumbers[1]);


    // this is telling c that it can only hold 10 numbers
    int mynumbers[10];
    mynumbers[1]=80;
    printf("%d",mynumbers[1]);

    return 0;
}