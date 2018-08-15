#include<stdio.h>

int main()
{
    long int x,y,i,s=0;
    scanf("%ld%ld",&x,&y);
    if(x<y)
    {
        for(i=x; i<=y; i++)
        {
        if(i%13==0){
            continue;
        }
        s=s+i;
        }
        printf("%ld\n",s);
    }
    else
    {
        for(i=y; i<=x; i++)
        {
            if(i%13==0){
            continue;
        }
        s=s+i;
        }
        printf("%ld\n",s);
    }
    return 0;
}
