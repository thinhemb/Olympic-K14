#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+1;
int main()
{
    int n;
    cin>>n;
    long long a[maxn];
    for (int i = 0; i <n ; i++)
    {
        cin>>a[i];
    }
    long long s=0;
    sort(a,a+n);
    // int l=0,r=maxn*maxn;
    // while (l>=r)
    // {
        
    // }
    for (int  j= 2; j <= 1000; j++)
    {
        s=0;
        for (int i = 0; i < n; i++)
        {
            long long p=pow(j,i);
            s+=abs(p-a[i]);
        }
        if(s==1999982505)cout<<j<<"\n";
        //cout<<s<<" \n";
    }
    
    
    
    return 0;
}
