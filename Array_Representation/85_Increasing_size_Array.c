#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,*q;
    p=(int *)malloc(5*sizeof(int));
    p[0]=2;
    p[1]=4;
    p[2]=6;
    p[3]=8;
    p[4]=10;
    for (int  i = 0; i < 5; i++)
    {
        printf("%d\t",p[i]);
    }printf("\n");
    q=(int *)malloc(10*sizeof(int));
    for (int  i = 0; i < 10; i++)
    {
        printf("%d\t",q[i]);
    }printf("\n");

    for (int  i = 0; i < 5; i++)
    {
        q[i]=p[i];
    }
   printf("\n");
    for (int  i = 0; i < 10; i++)
    {
        printf("%d\t",q[i]);
    }
    p=q;
    q=NULL;
printf("\n");
    for (int  i = 0; i < 10; i++)
    {
        printf("%d\t",p[i]);
    }
    printf("\n");
    for (int  i = 0; i < 10; i++)
    {
        printf("%d\t",q[i]);
    }

}