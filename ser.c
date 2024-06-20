// write a program to search a value in an array

#include<stdio.h>
void main()
{
    int x[5],y,i;
    for(i=0;i<5;i++)
    {
    scanf("%d",&x[i]);
    }
    scanf("&d",&y);
    for(i=0;i<5;i++)
    {
        if(x[i]==y)
        {
            printf("value found");
            break;
      } 
    } 
     if(i==5)
     {
        printf("value not found");

     }
 }
 