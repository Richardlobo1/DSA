#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr){
    for (int  i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
    

}
int Get(struct Array arr,int index)
{
     if (index>=0&&index<arr.length)
        {
            return arr.A[index];
        }
            return -1;
    
};
int Set(struct Array *arr, int index,int value){
    if (index>=0&& index<arr->length)
    {
        arr->A[index]=value;
        return arr->A[index];
    }
    return -1;
    
}
int Max(struct Array arr){
    int max=arr.A[0];
    for (int  i = 0; i < arr.length; i++)
    {
        if (max<arr.A[i])
        {
            max=arr.A[i];
        }
        
    }
    return max;
    
}
int Min(struct Array arr){
    int min=arr.A[0];
    for (int  i = 0; i < arr.length; i++)
    {
        if (min>arr.A[i])
        {
            min=arr.A[i];
        }
        
    }
    return min;
    }
int Sum(struct Array arr){
    int sum=0;
    for (int  i = 0; i < arr.length; i++){
        sum+=arr.A[i];

    }
        return sum;
    
}
float Average(struct Array arr){
    return (float)Sum(arr)/arr.length;
}
int main(){
struct Array arr={{5,7,6,9,2,1,7},20,7};
Display(arr);
printf("\n%d",Get(arr,0));
printf("\n%d\n",Set(&arr,5,0));
Display(arr);
printf("\n%d\n",Max(arr));
printf("\n%d\n",Min(arr));
printf("\n%d\n",Sum(arr));
printf("\n%d\n",Average(arr));
}