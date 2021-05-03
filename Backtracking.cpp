#include <iostream>
#define Max 20 
using namespace std;
int Check[Max]={0};
int a[Max];
int n;
void Xuat()
{
    for (int i = 1; i <=n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
void Try(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (!Check[i])
        {
            a[k]=i;
            Check[i]=1;
            if (k==n)
            {
                Xuat();
            }
            else
            {
                Try(k+1);
            }
            Check[i]=0;
            
        }
        
    }
    
}
int main()
{
    cout<<"nhap n= ";
    cin>>n;

    Try(1);
    
    return 0;
}
