#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[2200+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long s=0;
    for (int i = 0; i < k; i++)
    {
        s+=a[i];
    }
    cout<<s;
   
    return 0;
}
