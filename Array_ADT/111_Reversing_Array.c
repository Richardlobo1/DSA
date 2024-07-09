#include <stdio.h>
#include <stdlib.h>
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
struct Array
{
    int A[20];
    int size;
    int length;
};
void Reverse(struct Array *arr)
{
    int *B;
    int j;
    B = (int *)malloc(arr->length * sizeof(int));
    for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}

void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
void Reverse2(struct Array *arr)
{
    int j;
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(&arr->A[i], &arr->A[j]);
    }
};
int LeftShift(struct Array *arr)
{
    for (int i = 1; i < arr->length; i++)
    {
            arr->A[i - 1] = arr->A[i];
    }
    arr->A[arr->length-1]=0;
}
int LeftRotate(struct Array *arr)
{  int last=arr->A[0];
    for (int i = 1; i < arr->length; i++)
    {
            arr->A[i - 1] = arr->A[i];
    }
   arr->A[arr->length-1]=last;
}
int main()
{
    struct Array arr = {{4, 8, 7, 9, 3, 5, 2, 1, 9, 7, 6}, 20, 11};
    Display(arr);
    Reverse(&arr);
    printf("\n\n");
    Display(arr);
    Reverse2(&arr);
    printf("\n\n");
    Display(arr);
    // LeftShift(&arr);
    // printf("\n\n");
    // Display(arr);
    LeftRotate(&arr);
    printf("\n\n");
    Display(arr);

}