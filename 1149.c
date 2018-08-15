#include<stdio.h>

int main()
{
    int a,b,i,s;
    while(scanf("%d%d",&a,&b))
    {
        if(a<=0)
            break;
        else if(b<=0)
        {
            continue;
        }
        s=0;
        for(i=a; i<(a+b); i++)
        {
            s=s+i;
        }
        printf("%d\n",s);
    }

    return 0;
}
