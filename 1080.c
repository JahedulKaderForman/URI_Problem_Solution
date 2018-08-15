#include<stdio.h>

int main()
{
    long int max,i,a,pos;
    scanf("%ld",&a);
    max=a;
    pos=1;
    for(i=2; i<=100; i++)
    {
        scanf("%ld",&a);
        if(a>max)
        {
            max=a;
            pos=i;
        }
    }
    printf("%ld\n%ld\n",max,pos);
    return 0;
}

