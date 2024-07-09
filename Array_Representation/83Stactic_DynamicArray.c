#include <stdio.h>
#include<stdlib.h>
int main()
{
    // int A[5] = {2, 4, 6, 8};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", A[i]);
    //     printf("%d\n", A[2]);
    //     printf("%d\n", 2 [A]);
    //     printf("%d\n", *(A + 2));
    //     printf("\n");
    // }
 int A[5]={3,5,5,3};
 int *p;
 int i;
 p=(int *)malloc(5*sizeof(int));
 p[0]=64;
 p[1]=46;
 p[2]=1;
 p[3]=78;
 p[4]=55;
 for(i=0;i<5;i++)
 printf("%d ",A[i]);
 
 printf("\n");
 for(i=0;i<5;i++)
 printf("%d ",p[i]);
 
 return 0;

}