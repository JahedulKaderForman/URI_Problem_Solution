#include<stdio.h>

int main()
{
    long int a,b,c,d,e,f,g,h;
    scanf("%ld",&a);
    printf("%d\n",a);
    b=a/100;
    a=a%100;
    printf("%ld nota(s) de R$ 100,00\n",b);
    c=a/50;
    a=a%50;
    printf("%ld nota(s) de R$ 50,00\n",c);
    d=a/20;
    a=a%20;
    printf("%ld nota(s) de R$ 20,00\n",d);
    e=a/10;
    a=a%10;
    printf("%ld nota(s) de R$ 10,00\n",e);
    f=a/5;
    a=a%5;
    printf("%ld nota(s) de R$ 5,00\n",f);
    g=a/2;
    a=a%2;
    printf("%ld nota(s) de R$ 2,00\n",g);
    h=a/1;
    printf("%ld nota(s) de R$ 1,00\n",h);

    return 0;

}
