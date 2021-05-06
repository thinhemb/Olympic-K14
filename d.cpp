#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[55];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    } 
    sort(a,a+n);
    int sum=0,cnt=0;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    if(m==1)
    {
        cout<<0;
        return 0;
    }
    for (int i = n-1; i >-1; i--)
    {
        sum+=a[i];
        cnt++;
        if(sum>=m)
        {
            //cout<<sum<<" ";
            cout<<cnt;
           break;
        }
        sum--;
    }
    if(sum<m)cout<<-1;
    return 0;
}
