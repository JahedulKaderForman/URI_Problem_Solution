#include<stdio.h>

int main()
{
    int i,j,n=5;
    for(i=1;i<=9;i+=2){
        for(j=((i+7)-1);j>=n;j--){
            printf("I=%d J=%d\n",i,j);

        }
        n=j+2;
    }
    return 0;
}

