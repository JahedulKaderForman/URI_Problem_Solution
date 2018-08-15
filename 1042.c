#include<stdio.h>

int main()
{
    int a[3],i,b[3],temp,j,r;
    for(i=0; i<=2; i++)
    {
        scanf("%d",&a[i]);

    }
    for(r=0,i=0; r<=2,i<=2; r++,i++)
    {
        b[r]=a[i];
    }
    for(i=0; i<2; i++)
    {
        for(j=1; j<=2; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    for(i=0; i<=2; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
    for(r=0;r<=2;r++){
        printf("%d\n",b[r]);
    }

    return 0;
}
