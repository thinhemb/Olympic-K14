#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
vector <int> e[maxn];
int n,m;
int check[maxn]={0};
void dfs(int x)
{
    check[x]=1;
     for (auto y : e[x] )
    {
        if(check[y]==0)
        dfs(y);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,k;
    cin>>n>>k;
    for (int i = 1; i <=k; i++)
    {
        int u,v;
        cin>>u>>v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    int cnt=0;
    for (int i = 1; i <=n; i++)
    {
        if(check[i]==0)
        {
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt+k-n;
    
    

    
    
    
    return 0;
}
