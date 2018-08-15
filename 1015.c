#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,e,s,f,t=1,x_1,x_2,y_1,y_2;
    while(t<=2)
    {
        scanf("%lf%lf",&a,&b);
        if(t==1)
        {
            x_1=a;
            y_1=b;
        }
        else
        {
            x_2=a;
            y_2=b;
        }
        t++;
    }
    e=(x_2-x_1)*(x_2-x_1);
    f=(y_2-y_1)*(y_2-y_1);
    s=sqrt(e+f);
    printf("%.4lf\n",s);
    return 0;
}
