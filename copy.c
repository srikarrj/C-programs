// write a program to copy one string to another string

#include<stdio.h>
void main()
{
    char x[10];
    char y[10];
    int i;
    scanf("%s",x);
    for(i=0;i<10;i++)
    {
        y[i]=x[i];
        if(x[i]=='\0')
        {
            break;
        }
    }
    printf("%s",y);
}
