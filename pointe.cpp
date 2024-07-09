//pointer struct
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;     
};

int main(){
// rectangle r={77,8};
// cout<<r.length<<endl<<r.breadth<<endl;
// rectangle *p=&r;
rectangle *p;
// p= new rectangle; in c++
p=(struct rectangle*)malloc(sizeof(struct rectangle));
p->length=55;
p->breadth=32;
cout<<p->length<<endl<<p->breadth<<endl;
}