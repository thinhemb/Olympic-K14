#include <bits/stdc++.h>
using namespace std;
const int maxn=5000+4;
long long b[maxn];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int l=n;
    map<int,int> m;
    long long a[maxn];
    for (int i = 0; i <n ; i++)
    {
        int k;
        cin>>k;
        m[k]++;
    }
    int Max=1;
    for ( auto i = m.begin(); i != m.end(); i++)
    {
        if(Max < i->second)Max=i->second;
    }
    cout<<Max;
    
    
   
    return 0;
}
