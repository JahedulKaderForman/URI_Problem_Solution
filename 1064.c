#include<stdio.h>

int main()
{
    int i,b=0;
    float a,s=0;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&a);
        if(a>0){
            b=b+1;
            s=s+a;
        }
    }
    printf("%d valores positivos\n",b);
    printf("%.1f\n",s/b);
    return 0;
}
