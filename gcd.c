#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    if(a==0)
        d=b;
    else if(b==0)
        d=a;
    else
    {
        c=a;
        while(c!=0)
        {
            d=c;
            c=a%b;
            if(c==0)
                break;
            a=b;
            b=c;
        }
    }
    printf("%d",d);
    return 0;
}
