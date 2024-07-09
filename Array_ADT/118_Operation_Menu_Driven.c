#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int *A;
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
void Insert(struct Array *arr, int index, int x)
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
int Delete(struct Array *arr, int index)
{
    int x = 0;
    // int i;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;

        return 0;
    }
}
int LinearSearch(struct Array *arr, int index)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (index == arr->A[i])
        {

            return i;
        }
    }
    return -1;
}
int Sum(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
       
    } return sum;
}
int main()
{
    int choice, index, element;
    struct Array arr1;
    printf("Enter the size of array\n");
    scanf("%d", &arr1.size);
    arr1.A = (int *)malloc(arr1.size * sizeof(int));
    arr1.length=0;
    do
    {
        printf("\n4Menu\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Search\n");
        printf("4.Sum\n");
        printf("5.Display\n");
        printf("6.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element and index \n");
            scanf("%d%d", &element, &index);
            Insert(&arr1, index, element);
            break;
        case 2:
            printf("Enter the  index \n");
            scanf("%d", &index);
            element = Delete(&arr1, index);
            printf("The deleted element is %d", element);
            break;
        case 3:
            printf("Enter the  element to search \n");
            scanf("%d", &element);
            index = LinearSearch(&arr1, element);
            printf("The  element is at index  %d", index);
            break;
        case 4:
            printf("sum is %d \n", Sum(arr1));
            break;
        case 5:
            Display(arr1);
            
        }
    } while (choice < 6);
}