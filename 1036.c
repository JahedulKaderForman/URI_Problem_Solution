#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,x,y;
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b-4*a*c);
    if( a==0 || d <0)
        printf("Impossivel calcular");
    else
        {
        x= (-b+sqrt(d))/(2.0*a);
        y= (-b-sqrt(d))/(2.0*a);
        printf("R1 = %.5f\n",x);
        printf("R2 = %.5f\n",y);
}
return 0;
}
