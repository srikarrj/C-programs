#include<stdio.h>
void main()
 {
    char x[5][10];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%s",x[i]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            if(x[i][j]=='\0')
            {
                break;
            }
        printf("%d",i);
        }
    }
 } 