#include<stdio.h>

int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        for(i=x; i<y; i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);
            }
        }
    }
    else
    {
        for(i=y; i<x; i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);
            }
        }

        return 0;
    }
}
