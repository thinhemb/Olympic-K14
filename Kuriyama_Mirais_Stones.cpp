#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+4;
int main()
{
    int n;
    cin>>n;
    long long a[maxn],cp[maxn];
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        cp[i]=a[i];
    }
    
    sort(cp+1,cp+1+n);
    for (int i = 2; i <= n; i++)
    {
        a[i]+=a[i-1];
        cp[i]+=cp[i-1];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int type,l,r;
        cin>>type>>l>>r;
        long long sum=0;
        if(type==1)
        {
            sum=a[r]-a[l-1];
            
        }
        else
        {
            sum=cp[r]-cp[l-1];
        }
        cout<<sum<<"\n";
        
    }
    
    
    return 0;
}
