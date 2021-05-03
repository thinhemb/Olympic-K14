#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int q;
    cin>>q;
    while (q--)
    {
        int m;
        cin>>m;
        // int l=0,r=n;
        // while(l<=r)
        // {
        //     int mid=(l+r)/2;
        //     if(m<a[mid])r=mid-1;
        //     else l=mid+1;
        // }
        // if(l>n)cout<<n<<endl;
        // else
        // cout<<l<<endl;
        int ans = upper_bound(a+1 , a+1  + n, m) - a;
        ans-=1;
        cout<<ans<<endl;
    }
    
   
    return 0;
}
