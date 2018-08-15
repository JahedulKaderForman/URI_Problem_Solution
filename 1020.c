#include<stdio.h>

int main()
{
    int a,y,m,d,s;
    scanf("%d",&a);
    y=a/365;
    m=a%365;
    s=m;
    d=0;
    if(m>=30){
        m=m/30;
        d=s%30;
    }
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}
