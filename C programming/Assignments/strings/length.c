#include<ctype.h>
#include<stdio.h>
#include <stdlib.h>
void length(char*);
int main()
{
   char str[100];
   printf ("Enter a string! \n");
   fgets(str,sizeof (str),stdin);
   length(str);
return 0;
}

void length(char *ch)
{
    int count =0;
    while(*ch != 0)
    {
        count++;
        ch++;
    }
    printf("the length is : %d\n",count-1);
}
