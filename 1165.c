#include<stdio.h>

int main()
{
    int i,n,c;
    long long int a;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&a);
        c=1;
        for(i=2;i<a;i++){
            if(a%i==0){
                c=0;
                break;
            }
        }
        if(c==0)
            printf("%lld nao eh primo\n",a);
        else
            printf("%lld eh primo\n",a);
    }
    return 0;
}
