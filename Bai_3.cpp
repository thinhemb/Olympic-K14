#include <iostream>
using namespace std;
void   Sum(int a,int b)
{
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}
void Tic(int a,int b)
{
    cout<<a<<" * "<<b<<" = "<<a*b;
}
int main()
{
    int a,b;
    cout<<"\n Nhap so nguyen a: ";cin>>a;
    cout<<"\n Nhap so nguyen b: ";cin>>b;
    Sum(a,b);
    Tic(a,b);
   
}
