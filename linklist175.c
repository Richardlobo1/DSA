#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for (int i = 0; i < n; i++)
    {
            t=(struct Node*)malloc(sizeof(struct Node));
            t->data=A[i];
            t->next=NULL;
            last->next=t;
            last=t;
    }
    
}
void Display(struct Node*p){
    while (p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
    
}
int main()
{
    int A[] = {4, 5, 7, 4};
    create(A,4);
    Display(first);
    return 0;
}