#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[20];
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
void InsertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}
int isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
        {
            return 0;
        }
        return 1;
    }
}
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}
int main()
{
    struct Array arr = {{2, -3, 25, 10, -15, -7}, 20, 6};
    // printf("%d\n",isSorted(arr));
    //  InsertSort(&arr,8);
    Rearrange(&arr);
    Display(arr);
}