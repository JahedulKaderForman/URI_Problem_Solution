#include<stdio.h>

int main()
{
    int i;
    double a,s=0;
    for(i=1;i<=6;i++)
    {
        scanf("%d",&a);
        if(a>0)
        {
            s=s+1;
        }
    }
    printf("%lf valores positivos\n",s);
    return 0;
    }
