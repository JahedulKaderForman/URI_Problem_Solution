#include<stdio.h>

int main(){
    int n,x,y;
    double z;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&x,&y);
        if(x==0 && y==0){
            printf("divisao impossivel\n");
        }
        else if(y==0){
                printf("divisao impossivel\n");
        }
        else{
            z=x/(double)y;
            printf("%.1lf\n",z);
        }
    }
    return 0;
}
