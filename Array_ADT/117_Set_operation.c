#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
};
struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] == arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
        else if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = k;
    arr3->size = 10;
}
struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    printf("\n");
    int i, j, k;
    i = j = k = 0;
    struct Array *arr4 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] == arr2->A[j])
        {
            arr4->A[k++] = arr1->A[i++];
            j++;
        }
        else if (arr1->A[i] < arr2->A[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    arr4->length = k;
    arr4->size = 10;
}
struct Array *Difference(struct Array *arr1, struct Array *arr2)
{
    printf("\n");
    int i, j, k;
    i = j = k = 0;
    struct Array *arr5 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr5->A[k++] = arr1->A[i++];
        }
        else if (arr1->A[i] > arr2->A[j])
        {
            j++;
        }
        else
        {
            j++;
            i++;
        }
    }

    arr5->length = k;
    arr5->size = 10;
}

int main()
{
    struct Array arr1 = {{2, 4, 22, 47, 66}, 10, 5};
    struct Array arr2 = {{4, 7, 22, 64, 87}, 10, 5};
    struct Array *arr3;
    struct Array *arr4;
    struct Array *arr5;
    arr3 = Union(&arr1, &arr2);
    Display(*arr3);
    arr4 = Intersection(&arr1, &arr2);
    Display(*arr4);
    arr5 = Difference(&arr1, &arr2);

    Display(*arr5);
}
