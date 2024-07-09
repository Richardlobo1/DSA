#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    // Referencing
    p = &a;
    cout << &a << endl;
    cout << &p << endl;
    //  dereferencing
    cout << *p << endl;
    // Array using pointer;
    int A[5] = {5, 67, 3, 7, 3};
    int *b;
    // If you want to use ampersand(&) then you should say A of zero, A[0] means this to 2, A[0] is 2 and its address

b = A;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i]; cout <<b[i] << endl;
    }
}