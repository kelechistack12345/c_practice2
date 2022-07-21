#include <stdio.h>
#include <stdlib.h>


int main()
{

char color[20];
char pluralnoun[20];
char celebrityf[20];
char celebrityl[20];

printf("enter color: ");
scanf("%s", color);
printf("enter plural-noun: ");
scanf("%s", pluralnoun);
printf("enter celebrity ");
scanf("%s%s", celebrityf,celebrityl);


printf("roses are %s\n",color);
printf("%s are blue\n",pluralnoun);
printf("i love  %s %s\n",celebrityf,celebrityl);

return 0;

}