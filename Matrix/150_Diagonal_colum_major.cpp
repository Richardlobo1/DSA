#include<iostream>
using namespace std;
class LowerTri
{
private:
   int  *A;
   int n;
public:
    LowerTri(){
        n=2;
        A=new int[2*(2+1)/2];
    }
    LowerTri(int n){
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    ~LowerTri()
    {
        delete[]A;
    }
    void Set(int i,int j,int x);
    int Get(int i,int j);
    void Display();
    int GetDimension(){
        return n;

    }
};


void LowerTri::Set(int i,int j,int x)
{
    if(i>=j)
        A[i*(i-1)/2+j-1]=x;
}
int LowerTri::Get(int i,int j)
{
    if (i>=j)
    {
        return A[i*(i-1)/2+j-1];
    }
    
}

void  LowerTri::Display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if (i==j)
            {
                cout<<A[i]<<" ";

            }
            else
            {
                cout<<"0 ";
            }
            

        }
        
    }
    
}
int main(){
    int d,x;
    cout<<"Enter all Element";
    LowerTri lm(d);
    for (int i = 0; i <= d; i++)
    {
        for (int j = 0; j <=d ; j++)
        {
            cin>>x;
            lm.Set(i,j,x);
        }
        
    }
    lm.Display();
    return 0;    
}