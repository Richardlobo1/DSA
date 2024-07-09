#include <stdio.h>
int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sumN(n - 1) + n;
    }
}
int main()
{
    int r;
    scanf("%d", &r);

    printf("%d", sumN(r));
}