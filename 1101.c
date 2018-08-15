#include<stdio.h>

int main()
{
    int x,y,i,s;
    while(scanf("%d%d",&x,&y)){
    if(x<=0 || y<=0)
        break;
    else if(x<y)
    {
        s=0;
        for(i=x; i<=y; i++)
        {
            printf("%d ",i);
            s=s+i;
        }
        printf("Sum=%d\n",s);
    }
    else
    {
        s=0;
        for(i=y; i<=x; i++)
        {
            printf("%d ",i);
            s=s+i;
        }
        printf("Sum=%d\n",s);
    }
    }
    return 0;
}
