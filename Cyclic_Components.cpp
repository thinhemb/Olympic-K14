#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
vector <int> e[maxn];
int n,m;
int id=0;
int check[maxn]={0};
int u,v;
void dfs(int x)
{
    check[x]=1;
    if(e[x].size()!=2)id=1;
    for (auto y : e[x] )
    {
        if(check[y]==0)
        dfs(y);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k;
    cin>>n>>k;
    for (int i = 1; i <=k; i++)
    {
        cin>>u>>v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    int cnt=0;
    for (int i = 1; i <=n; i++)
    {
        if(check[i]==0)
        {
            id=0;
            dfs(i);
            if(id!=1)cnt++;
        }
    }
    cout<<cnt;
    

    
    
    
    return 0;
}
