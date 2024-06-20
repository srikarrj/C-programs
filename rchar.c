#include<stdio.h>
void main()
{
    char x[10];
    int i;
    scanf("%s",x);
    for(i=0;i<10;i++)
    {
        if(x[i]=='\0')
{
    break;
   }
}
for(i=i-1;i>0;i--)
{
    printf("%c",x[i]);
   }
}