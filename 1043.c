#include<stdio.h>

int main()
{
    double a,b,c,p,Area;
    scanf("%lf%lf%lf",&a,&b,&c);
    if((a+b)>c && (b+c)>a){
        p=a+b+c;
        printf("Perimetro = %.1lf\n",p);
    }
    else{
        Area=((a+b)/2.0)*c;
        printf("Area = %.1lf\n",Area);
    }
    return 0;
}
