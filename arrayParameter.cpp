#include<iostream>
using namespace std;
void func(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
            // cout<<a[i]<<endl;
            a[0]=77;
    }
    
}
int main()
{
    int a[]={2,4,6,4,32,6};
    int n=6;
    // for (int x:a)
    func(a,n);

    for (int x:a )
        cout<<x<<" ";
    //   fun(a);
    return 0;

}