#include<stdio.h>

int main(){
    int x,i,j;
    scanf("%d",&x);
    if(x%2!=0){
        for(i=1,j=x;i<=6;i++,j+=2){
            printf("%d\n",j);
        }
    }
    else if(x%2==0){
        for(i=1,j=x+1;i<=6;i++,j+=2){
            printf("%d\n",j);
        }
    }
    return 0;
}
