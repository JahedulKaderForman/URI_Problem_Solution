#include<stdio.h>

int main()
{
    char a;
    double b,c,TOTAL;
    scanf("%s%lf%lf",&a,&b,&c);
    TOTAL=b+((c*15)/100.0);
    printf("TOTAL = R$ %.2lf",TOTAL);
    return 0;
}
