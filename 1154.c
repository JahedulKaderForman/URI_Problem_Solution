#include<stdio.h>

int main()
{
    int x,s=0,count=0;
    double average;
    while(scanf("%d",&x))
    {
        if(x<0){
            break;
        }
         s=s+x;
         count++;
        }
    average=s/(double)count;
    printf("%.2lf\n",average);
    return 0;
}
