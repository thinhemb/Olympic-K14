#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
const int maxn=1e5+1;
int main()
{
     ios_base::sync_with_stdio(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[maxn];
    int a23;
    
    for(int i=1;i<n;i++)
    {
         cout<<"? 1 "<<i+1<<"\n";
        fflush(stdout);
        cin>>a[i];
    }
    cin>>a23;
    cout<<"? 2 3\n";
    fflush(stdout);
    int a1=(a[1]+a[2]-a23)/2;
    cout<<"! "<<a1<<" ";
    fflush(stdout);
    for(int i=1;i<n;i++)
    {
        cout<<a[i]-a1<<" ";
       
    }
    cout<<"\n";
    fflush(stdout);
    return 0;
}
