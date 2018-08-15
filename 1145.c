#include<stdio.h>

int main()
{
    int x,r;
    long long int y,i;
    scanf("%d%lld",&x,&y);
    for(i=1;i<=y;i++){
            printf("%lld ",i);
            for(r=x;r<=x;r+=2){
                printf("\b\n");
            }

    return 0;
}
