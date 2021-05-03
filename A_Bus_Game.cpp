#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
   long long a,b,n;
    cin>>a>>b>>n;
    int cnt=0;
    while(max(a,b)<=n)
    {
        if(a>b)swap(a,b);
        cnt++;  
        a+=b;
    }
    cout<<cnt<<"\n";
    }
}