#include<stdio.h>

int main()
{
    int NUMBER,a;
    float c,SALARY;
    scanf("%d %d %f",&NUMBER,&a,&c);
    SALARY=a*c;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
