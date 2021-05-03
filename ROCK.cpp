#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5;
int check[maxn]={0};
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,k,p;
        cin>>n>>k>>p;
        int v[k];
        for (int i = 0; i < k; i++)
        {
            cin>>v[i];
            check[v[i]]==1;
        }
        sort(v,v+k);    
        if(n-k<p)cout<<-1;
        else
        {
            long long l=1,r=n;
            while (l<=r)
            {
                long long mid=(l+r)/2;
                if(mid>p+k)r=mid-1;
                else if(mid==p+k)
                {
                    l=mid;
                    break;
                } 
                else l=mid+1;
                int cnt=0;
                for (int i = l; i >=1 ; i++)
                {
                    if(check[i]==1)cnt++;
                    if(i-cnt==k)
                    {
                        cout<<i;
                    }
                }
                
            }
            
        }
        
    }
    
    
    
    return 0;
}
