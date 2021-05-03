#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        long long as=abs(a-b);
        long long ans=as/10;
        if(as%10!=0)ans++;
        cout<<ans<<"\n";
    }
    
    
    
    return 0;
}
