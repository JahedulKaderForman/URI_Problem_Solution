#include<stdio.h>

int main()
{
    int a,b,c,d,m;
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+abs(a-b))/2;
    m=(d+c+abs(d-c))/2;
    printf("%d eh o maior\n",m);
    return 0;
}
