#include<stdio.h>

int main()
{
    int a,b,c,x;
    scanf("%d",&x);
    a=0;
    b=0;
    printf("%d",a);
    c=1;
    while(c<x)
    {

        printf(" %d",c);
        a=b;
        b=c;
        c=a+b;

    }
    printf("\n");
    return 0;
}

