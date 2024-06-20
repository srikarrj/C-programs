//copy one array element into another array in reverse

#include<stdio.h>
void main()
{
    int x[5];
    int y[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0,j=4;i<5;i++,j--)
    {
        y[j]=x[i];
    }
    for(j=0;j<5;j++)

    {
         printf("%d",y[j]);
    }
}


  