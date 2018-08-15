#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c;
    char x[20],y[20],z[20];
    char vertebrado,mamifero,onivoro;
    scanf("%s%s%s",&x,&y,&z);
    a=strcmp(vertebrado,x);
    b=strcmp(mamifero,y);
    c=strcmp(onivoro,z);
    if(a==0 && b==0 && c==0){
        printf("homem");
    }
    else
        printf("null");

        /*{
            printf("EVEN POSITIVE\n");
        }
        else if(a<0 && a%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if(a>0 && a%2!=0)
        {
            printf("ODD POSITIVE\n");
        }
        else if(a<0 && a%2!=0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(a==0)
        {
            printf("NULL\n");
        }
    }*/
    return 0;
}
