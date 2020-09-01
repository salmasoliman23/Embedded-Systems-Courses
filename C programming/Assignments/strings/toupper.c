#include<ctype.h>
#include<stdio.h>
#include <stdlib.h>
void Toupper(char[]);
int main()
{
   char str[100];
   printf ("Enter a string! \n");
   fgets(str,sizeof (str),stdin);
   Toupper(str);
return 0;
}
void Toupper(char ch[])
{   
    for (int i=0;i<100;i++)
    {
    switch (ch[i])
    {
    case 'a':  ch[i] = 'A'; printf("%c",ch[i]); break;
    case 'b':  ch[i] = 'B'; printf("%c",ch[i]); break;
    case 'c':  ch[i] = 'C'; printf("%c",ch[i]); break;
    case 'd':  ch[i] = 'D'; printf("%c",ch[i]); break;
    case 'e':  ch[i] = 'E'; printf("%c",ch[i]); break;
    case 'f':  ch[i] = 'F'; printf("%c",ch[i]); break;
    case 'g':  ch[i] = 'G'; printf("%c",ch[i]); break;
    case 'h':  ch[i] = 'H'; printf("%c",ch[i]); break;
    case 'j':  ch[i] = 'J'; printf("%c",ch[i]); break;
    case 'k':  ch[i] = 'K'; printf("%c",ch[i]); break;
    case 'l':  ch[i] = 'L'; printf("%c",ch[i]); break;
    case 'i':  ch[i] = 'I'; printf("%c",ch[i]); break;
    case 'm':  ch[i] = 'M'; printf("%c",ch[i]); break;
    case 'n':  ch[i] = 'N'; printf("%c",ch[i]); break;
    case 'w':  ch[i] = 'W'; printf("%c",ch[i]); break;
    case 'x':  ch[i] = 'X'; printf("%c",ch[i]); break;
    case 'y':  ch[i] = 'Y'; printf("%c",ch[i]); break;
    case 'z':  ch[i] = 'Z'; printf("%c",ch[i]); break;
    case 'o':  ch[i] = 'O'; printf("%c",ch[i]); break;
    case 'p':  ch[i] = 'P'; printf("%c",ch[i]); break;
    case 'q':  ch[i] = 'Q'; printf("%c",ch[i]); break;
    case 's':  ch[i] = 'S'; printf("%c",ch[i]); break;
    case 'r':  ch[i] = 'R'; printf("%c",ch[i]); break;
    case 'v':  ch[i] = 'V'; printf("%c",ch[i]); break;
    case 'u':  ch[i] = 'U'; printf("%c",ch[i]); break;
    case 't':  ch[i] = 'T'; printf("%c",ch[i]); break;
    case ' ':  ch[i] = ' '; printf("%c",ch[i]); break;
    case '13': exit (0); // pressing enter
        
    default:
        break;
    }
    }
}
