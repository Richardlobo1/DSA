#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct matrix
{
    int *A;
    int n;
};
void Set(struct matrix *m, int i, int j, int x)
{
    if (i >= j)
    {
        m->A[m->n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j] = x;
    }
};
int Get(struct matrix m, int i, int j)
{
    if (i >= j)

    {
        return m.A[m.n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j];
    }
    else
    {
        return 0;
    }
}
void Display(struct matrix m)
{
    int i, j;
    for (int i = 0; i < m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i >= j)
            {
                printf("%d ", m.A[m.n * (j - 1) +(j - 2) * (j - 1) / 2 + i - j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    struct matrix m;
    int i, j, x;
    printf("Enter the dimension \n");
    scanf("%d", &m.n);
    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
    printf("enter all element");
    for (size_t i = 0; i <= m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {

            scanf("%d", &x);
            Set(&m, i, j, x);
        }
    }
    printf("\n\n");
    Display(m);

    return 0;
}