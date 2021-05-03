#include <iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll ans,m,x,r;
ll b[100000];
ll BS(ll l,ll r,ll x)
{
    if(l>r) return false;
    if(l==r && b[l]==x ) ans= l; 
    m=(l+r)/2;
    if(x>=m) BS(m,r,x);
    else BS(l,m-1,x);
}
int main()
{
    ll n,*a;
    cin>>n>>x;
    a=new ll[n];
    for (ll i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<upper_bound(a,a+n,x)-a<<" "<<lower_bound(a,a+n,x)-a<<endl;
    cout<<BS(0,n,x)<<endl;
    
    delete[] a;
    system("pause");
    return 0;
}
