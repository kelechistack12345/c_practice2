#include <stdio.h>
#include <stdlib.h>

int main(){


 char grade = 'k';

 switch(grade)
 {
    case 'A':
    printf("you did great:");
    break;
    case 'B':
    printf("you did good:");
    break;
    case 'C':
    printf("you did poorly:");
    break;
    case 'D':
    printf("you very bad:");
    break;
     case 'F':
    printf("you very failed:");
    break;
 
 default:
    printf("invalid grade");
 }




}
