// copy one array to another array

#include<stdio.h>
void main()
{
    int x[5];
    int y[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        y[i]=x[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d",y[i]);
    }
}