#include<stdio.h>
#include<stdlib.h>
struct Array
{
    // int *A;
    int A[20];
    int size;
    int length;

};
void display(struct Array arr){
    printf(
        "Element are\n"
    );
    for (int  i = 0; i < arr.length; i++)
    {
        printf("%d  ",arr.A[i]);
    }
    
}
int main(){
    struct Array arr={{3,5,2,67,4,3},20,6};
    // printf("Enter the size of array\n");
    // scanf("%d",&arr.size);
    // arr.A=(int *)malloc(arr.size*sizeof(int));
    // arr.length=0;
    // printf("Enter the Number of numbers\n");
    // int n;
    // scanf("%d",&n);
    // printf("Enter all Element\n");
    // for (int  i = 0; i < n; i++)
    // {
    //     scanf("%d",&arr.A[i]);
    // }
    // arr.length=n;
    display(arr);



    return 0;
}