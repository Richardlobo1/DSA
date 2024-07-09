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
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int Search(struct Array *arr, int index)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (index == arr->A[i])
        {
            // transposition matrix
            swap(&arr->A[i], &arr->A[i-1]);
            // move to front/head
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{3, 5, 2, 67, 4, 3}, 20, 6};

    // printf("Element delete are %d\n", Delete(&arr, 0));
    printf("\n%d\n", Search(&arr, 2));
    display(arr);
    return 0;
}