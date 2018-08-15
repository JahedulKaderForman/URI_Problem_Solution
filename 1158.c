#include<stdio.h>

int main()
{
    int a,b,x,i,s;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d%d",&a,&b);
        s=0;
        if(a%2==0)
        {
            for(i=a+1; i<=((a+1)+(2*(b-1))); i+=2)
            {
                s=s+i;
            }
            printf("%d\n",s);
        }
        else
        {
            for(i=a; i<=(a+(2*(b-1))); i+=2)
            {
                s=s+i;
            }
            printf("%d\n",s);
        }
    }
    return 0;
}
