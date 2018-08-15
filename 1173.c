#include<stdio.h>

int main()
{
    int N[10];
    int x,i;
    scanf("%d",&N[0]);
    for(i=1;i<9;i++){
        x=N[0]+2*N[i];
        printf("N[%d] = %d\n",i,x);
    }
    return 0;
}
