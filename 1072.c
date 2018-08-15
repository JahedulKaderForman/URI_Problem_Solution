#include<stdio.h>

int main()
{
    int N,i=0,r=0;
    long long int x;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%lld",&x);
            if(x>=10 && x<=20)
                i++;
            else
                r++;
        }
    printf("%d in\n",i);
    printf("%d out\n",r);
    return 0;
}
