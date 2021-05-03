#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b==n)
    {
        cout<<1;
    }
    else
    {
        int ans=0;
        for (int i = 1; i <n; i++)
        {
            int temp1=a/i;
            int temp2=b/(n-i);
            ans=max(ans,min(temp1,temp2));
        }
        cout<<ans;
    }
    
    
    
    return 0;
}
