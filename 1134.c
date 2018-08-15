#include<stdio.h>

int main()
{
    int a,s=0,p=0,r=0;
    while(scanf("%d",&a))
    {
        if(a==1)
        {
            s=s+1;
        }
        else if(a==2)
        {
            p++;

        }
        else if(a==3)
        {
            r++;
        }
        else if(a==4)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",s);
    printf("Gasolina: %d\n",p);
    printf("Diesel: %d\n",r);
    return 0;
}
