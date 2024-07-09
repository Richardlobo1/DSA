#include <stdio.h>
#include <stdlib.h>
struct Array
{
    // int *A;
    int A[20];
    int size;
    int length;
};
void display(struct Array arr)
{
    printf(
        "Element are\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d  ", arr.A[i]);
    }
}
void append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}
void insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {

        for (int i = arr->length; i > index; i--)
        {

            arr->A[i] = arr->A[i - 1];
        }

        arr->A[index] = x;
        arr->length++;
    }
}
int main()
{
    struct Array arr = {{3, 5, 2, 67, 4, 3}, 20, 6};
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
    insert(&arr, 5, 2
    );
    display(arr);

    return 0;
}