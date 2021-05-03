#include <iostream>
#include<algorithm>
using namespace std;
int n,s,a[100],sum,check[100],maxn=0;
void Backtracking(int k)
{
    for (int i = 1; i <=n; i++)
    {
        if (!check[i])
        {
            sum+=a[i];
            check[i]=1;
            if (k<=n)
            {
                if (sum<s)
                {
                    maxn=max(sum,maxn);
                }
                Backtracking(k+1);
            }
            sum-=a[i];
            check[i]=0;
        }
    }
}
int main()
{
    cin>>n>>s;
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }
    Backtracking(1);
    cout<<maxn<<endl;
    
    
    return 0;
}
