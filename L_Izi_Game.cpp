#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
       cin>>b[i];
    }
    vector <long long> a1(a,a+n);
    sort(a1.begin(),a1.end());
    
    for (int i = 0; i < m; i++)
    {
        long long dem=0;
        dem=upper_bound(a1.begin(),a1.end(),b[i])-a1.begin();
        cout<<dem<<" ";
    }
    return 0;
}
