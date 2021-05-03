#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long a[n],b[n],ans=0,min1=1e9+1,min2=1e9+1;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(min1>a[i])min1=a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            if(min2>b[i])min2=b[i];
        }
        for (int i = 0; i < n; i++)
        {
            ans+=max(a[i]-min1,b[i]-min2);
        }
        cout<<ans<<endl;
        
        
        
    }
    
    
    
    return 0;
}
