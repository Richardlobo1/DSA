#include<stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}
int main(){
    int d;
    // scanf("%d",&d);
    //  for(int i=1;i<=d;i++){
    //     s=s*i;

    //  }
d=factorial(5);
  printf("%d",d);
}