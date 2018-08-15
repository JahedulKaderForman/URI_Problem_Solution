#include<stdio.h>

int main()
{
    int x,i;
    while(scanf("%d",&x))
    {
        if(x==0){
            printf(" ");
            break;
        }
        for(i=1; i<=x; i++)
        {
            printf("%d ",i);
        }
        printf("\n");

    }
    return 0;
}
