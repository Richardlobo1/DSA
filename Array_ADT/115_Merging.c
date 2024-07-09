#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[11];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
struct Array *merge(struct Array *arr1, struct Array *arr2)
{
    int i, k,j;
    i=k=j=0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
        }
       else
        {
            arr3->A[k++]=arr2->A[j++];
        }
        
    }
    for ( ; i <arr1->length  ; i++)
    {
        arr3->A[k++]=arr1->A[i];
    }
    for ( ;j <arr2->length  ;j++)
    {
        arr3->A[k++]=arr2->A[j];
    }
    
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
}
int main()
{
    struct Array arr1 = {{3,4, 16, 34,47}, 10, 5};
    struct Array arr2 = {{1,7,27, 38, 54}, 10, 5};
    // Display(arr1);
    struct Array *arr3;
    arr3 = merge(&arr1,&arr2);
    Display(*arr3);
    return 0;
}