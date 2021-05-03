#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
vector <int> e[maxn];
stack <int> s;
int cx[maxn],Time=0;
int Timein[maxn],Timeout[maxn];
int ver[maxn];
int dis[maxn],pa[maxn];
int dfs(int x)
{
    
    s.push(x);
    cx[x]=1;
    Time++;
    for (auto y : e[x] )
    {
        if(cx[y]==0)
        dfs(y);
    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 1; i <=n; i++)
    {
        int u,v;
        cin>>u>>v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    pa[1]=0;
    dis[1]=1;
    dfs(1);
    while (m--)
    {
        int l;
        cin>>l;
        for (int i = 1; i <=l; i++)
        {
            cin>>ver[i];
        }
    
    }
    
    
    
    
    
    return 0;
}
