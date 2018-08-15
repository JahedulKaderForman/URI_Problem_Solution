#include<stdio.h>

int main()
{
    int a,i,e=0,o=0,p=0,n=0;
    for(i=1; i<=5; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            e=e+1;
            if(a>0)
                p=p+1;
            else if(a<0)
            {
                n=n+1;
            }
        }
        else if(a%2!=0)
        {
            o=o+1;
            if(a>0)
                p=p+1;
            else if(a<0)
            {
                n=n+1;
            }
        }

    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
    return 0;
}
