#include<stdio.h>

int main(){
    int a,b,t=1;
    float p,c,e,h,f,g;
    while(t<=2){
        scanf("%d%d%f",&a,&b,&c);
        if(t==1){
            e=c;
            h=b;
        }
        else if(t==2){
            f=b;
            g=c;
        }
        t++;
    }
    p=(f*g)+(h*e);
    printf("VALOR A PAGAR: R$ %.2f\n",p);
    return 0;
}
