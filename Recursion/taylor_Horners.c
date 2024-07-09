#include<stdio.h>
double e(int a, int b){
    static double s;
    if(b==0)
    return s;
    s=1+a*s/b;
    return e(a,b-1);
}
int main(){
    printf("%lf",e(2,10));
}