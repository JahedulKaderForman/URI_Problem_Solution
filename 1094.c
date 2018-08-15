#include<stdio.h>

int main()
{
    char a;
    int x,n;
    long int t=0,e=0,f=0,g=0;
    double m,r,o;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %c",&x,&a);
        t=t+x;
        if(a=='C')
        {
            e=e+x;
        }
        else if(a=='R')
        {
            f=f+x;
        }
        else if(a=='S')
        {
            g=g+x;
        }

    }

    printf("Total: %d cobaias\n",t);
    printf("Total de ceolhos: %ld\n",e);
    printf("Total de ratos: %ld\n",f);
    printf("Total de sapos: %ld\n",g);
    m=(e*100.0)/t;
    r=(f*100.0)/t;
    o=(g*100.0)/t;
    printf("Percentual de coelhos: %.2lf %%\n",m);
    printf("Percentual de ratos: %.2lf %%\n",r);
    printf("Percentual de sapos: %.2lf %%\n",o);
    return 0;
}
