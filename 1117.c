#include<stdio.h>

int main()
{

    double a,b,media;
    while(scanf("%lf%lf",&a,&b)){
        if(a>=0 && b<=10){
                media=(a+b)/2.0;
            printf("media = %lf\n",media);
            break;
        }
        else{
            printf("nota invalida\n");
        }
    }
    return 0;
}
