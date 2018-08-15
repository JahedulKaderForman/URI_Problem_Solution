#include<stdio.h>
void foo(int ar[],int len);
int main()
{
    int array[100];
    scanf("%d",&array);
    foo(array,10);


}
void foo(int a[],int len)
{
    int i;
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
}
