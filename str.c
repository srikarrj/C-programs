// write a program to copy in reverse

#include<stdio.h>
void main()
{
    char x[10];
    char y[10];
    int i,j;
    scanf("%s",x);
    for(i=0;i<10;i++)
    {
        if(x[i]='\0')
{
    break;
     }
 }
 for(i=i-1,j=0;i>0;i--,j++)
 {
    y[i]=x[i]
   }
 printf("%s",y)
 
 }