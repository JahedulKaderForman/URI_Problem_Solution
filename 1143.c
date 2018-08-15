#include<stdio.h>

int main(){

    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=3;j++){
            if(j==1){
                printf("%d ",i);
            }
            else if(j==2){
                printf("%d ",i*i);
            }
            else if(j==3){
                printf("%d ",i*i*i);
            }
        }
        printf("\n");
    }
    return 0;
}
