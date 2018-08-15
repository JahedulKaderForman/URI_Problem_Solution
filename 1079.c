#include<stdio.h>

int main()
{
    int i,n;
    float a,b,c,average;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%f%f%f",&a,&b,&c);
    average=((a*2)+(b*3)+(c*5))/(2+3+5);
    printf("%.1f\n",average);
    }
    return 0;
}
