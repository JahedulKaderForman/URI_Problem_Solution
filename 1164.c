#include<stdio.h>

int main()
{
    int i,s=0,n;
    long long int a;
    scanf("%d",&n);
    while(n--)
    {
        s=0;
        scanf("%lld",&a);
        for(i=1; i<a; i++)
        {
            if(a%i==0)
            {
                s=s+i;
            }
        }
        if(s==a)
        {
            printf("%lld eh perfeito\n",a);
        }
        else
            printf("%lld nao eh perfeito\n",a);
    }
    return 0;
}
