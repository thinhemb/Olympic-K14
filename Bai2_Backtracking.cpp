#include <iostream>
using namespace std;
int n,a[1000],check[1000],s=0;
void Backtracking(int k)
{
     for (int i = 1; i <= n; i++)
    {
            s+=i;
            a[k]=i;
            if (n==s)
            {
                for (int j = 1; j <= k; j++)
                {
                    cout<<a[j]<<"  ";
                }
                cout<<endl;
            }
            else if(s<n)
            {
                Backtracking(k+1);
            }
            s-=i;       
    }
}
int main()
{
   
    cin>>n;
    Backtracking(1);
    system("pause");
    return 0;
}
