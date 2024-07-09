#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[3][4]={{1,5,2,7},{4,6,2,9},{5,1,9,7}};
    int *B[3];
    int **C;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    } printf("\n");
    
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    } printf("\n");
    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));
for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}