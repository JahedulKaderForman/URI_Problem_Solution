#include<stdio.h>

int main()
{
    long int x,i,s;
    while(scanf("%ld",&x))
    {
        if(x==0)
            return 0;
        s=0;
        if(x%2==0)
        {
            for(i=x; i<=x+8; i+=2)
            {
                s=s+i;
            }
            printf("%ld\n",s);
        }
        else
        {
            for(i=x+1; i<=x+9; i+=2)
            {
                s=s+i;
            }
            printf("%ld\n",s);
        }
    }
    return 0;
}
