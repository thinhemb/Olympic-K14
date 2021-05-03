#include <iostream>
using namespace std;
int n,s,s1,dem=0;
int a[1000],check[1000];
void Backtracking(int k)
{
    for (int i = 0; i <=1; i++)
    {
        check[k]=i;
        if (check[k]==1 )
        {
            s1+=a[k];
        }
        if (k==n)
        {
            if (s1==s)
            {
                dem++;
            }
        }
        else 
        {
            Backtracking(k+1);
        }
        if (check[k]==1)
        {
            s1-=a[k];
        }
    }
}
int main()
{
    cin>>n>>s;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    Backtracking(1);
    cout<<dem<<endl;
    
    
    return 0;
}
