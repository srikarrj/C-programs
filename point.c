#include <stdio.h>
int main()
{
    char x[10]="innovative";
    char *p;
    for(p=x;*p!='\0';p++)
    {
        printf("%c",*p);
    }
}