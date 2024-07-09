#include <iostream>
#include<stdio.h>
 using namespace std;
 int main(){
    int x=4;
    int &v=x;
    int b=86;
    v=b;
    cout<<x<<endl<<v<<endl;
 }