#include<stdio.h>

int main()
{
    int N[20],i,k=10;
    for(i=1; i<=20; i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=20; i>=1; i--)
    {
        k++;
        if(i<=10)
        {
            i=k;
            printf("%d\n",N[i]);

        }
        else
            printf("%d\n",N[i]);

    }
    return 0;
}
