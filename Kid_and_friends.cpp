
#include<bits/stdc++.h>
using namespace std;
const long long maxn =2e5+5;
long long n,m,ans=0;
long long cx[maxn]={0},a[maxn],sum[maxn]={0},cnt=0;;
vector <long long> e[maxn];
stack <long long> s;
void DFS(long long x)
{
    while (!s.empty())s.pop();
    s.push(x);
    cx[x]=1;
    while (!s.empty())
    {
       
        int u=s.top();
        sum[cnt]+=a[u];
        s.pop();
        for ( long long v: e[u])
        {
            if(cx[v]==0)
            { 
                
                cx[v]=1;
                s.push(v);
                
            }
        }
        
    }
   

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin>>n>>m;
    for (long long i = 1; i <= m; i++)
    {
        long long u,v;
        cin>>u>>v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
         cin>>a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (cx[i]==0)
        {
            DFS(i);
            cnt++;
        }
        
    }
    sort(sum,sum+cnt);
    cout<<sum[cnt-1];
    
    return 0;
}
