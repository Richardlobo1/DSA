#include <iostream>
#include<stdio.h>
using namespace std;
struct Rectangle
{
    int length ;
    int breadth;
    char w;
};
// }r1,r2,r3;
//  struct Rectangle r1,r2,r3;
int main(){
    struct Rectangle  r1={2,5};
    // if you declare char  which is of one byte that too it acquire 4byte in memory  but utilise only one byte of it 
    // printf("%d",sizeof(r1));
    r1.length=4;
    r1.breadth=77;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    return 0;

}


