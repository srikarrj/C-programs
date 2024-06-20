// write a program to print 50 values

#include<stdio.h>
void main()
{
    int a[50];
    int i;
    for(i=0;i<50;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<50;i++)
    {
        printf("%d",a[i]);
    }
}