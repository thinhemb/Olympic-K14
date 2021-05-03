#include <iostream>
using namespace std;
int a[100],check[100],a1[100],n;
void Backtacking(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            a1[k]=a[i];
            check[i]=1;
            if (k==n)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout<<a1[j]<<" ";
                }
                cout<<endl;
            }
            else
            {
                Backtacking(k+1);
            }
            check[i]=0;
            
            
        }
        
    }
    
}
int main()
{
    
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    Backtacking(1);
    
    system("pause");
    return 0;
}
