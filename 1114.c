#include<stdio.h>

int main()
{
    long int a;
    while((scanf("%ld",&a))!=EOF)
    {
        if(a==2002)
        {
            printf("Acesso Permitido\n");
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
