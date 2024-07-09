#include<stdio.h>
int NCR(int n,int r){
    if (n==r||r==0){
        return 1;
    }
    else
    {
        return NCR(n-1,r-1)+NCR(n-1,r);
    }
    
    
}
int main(){
    printf("%d",NCR(5,3));
}