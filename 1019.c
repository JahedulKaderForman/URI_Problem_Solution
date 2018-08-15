#include<stdio.h>

int main()
{
    int a,s,h,m;
    scanf("%d",&a);
    h=0;
    m=a/60;
    s=a%60;
    if(m>=60)
    {
        h=m/60;
        m=m%60;
    }
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
