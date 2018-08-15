#include<stdio.h>

int main()
{
    int n,a,b,i,s=0;
    scanf("%d%d",&a,&b);
    if(a<=b)
    {
        if(a%2==0)
        {
            s=0;
            for(i=a+1; i<b; i+=2)
            {
                s=s+i;
            }
            printf("%d\n",s);

        }
        else
        {
            s=0;
            for(i=a+2; i<b; i+=2)
            {
                s=s+i;
            }
            printf("%d\n",s);
        }

    }
    else
    {
        if(a%2==0)
        {
            s=0;
            for(i=a-1; i>b; i=i-2)
            {
                s=s+i;
            }
            printf("%d\n",s);
        }
        else
        {
            s=0;
            for(i=a-2; i>b; i=i-2)
            {
                s=s+i;
            }
            printf("%d\n",s);
        }

    }
    return 0;
}

