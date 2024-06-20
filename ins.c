// write a program to insert a value in an array at a given position

#include<stdio.h>
void main()
{
    int a[10];
    int i,pos,value;
    {
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&pos);
        scanf("%d",&value);
        for(i=8;i>pos;i--)
    {

        a[i+1]=a[i];
}
    a[pos]=value;
   for(i=0;i<10;i++)    
{
    printf("%d",a[i]);
  }
}