#include<Stdio.h>
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
    printf("%d",i);
}