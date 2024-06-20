#include <stdio.h>
 void main()
{
    char st[20];
    scanf("%s",st);
    reverse(st);
}  
  reverse(char x[20])
  {
    int i;
    for(i=0;x[i]=='\0';i++)
    for(   ;i>0;i--)
    {
        printf("%c",x[i]);
    }
  }   