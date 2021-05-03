#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
const int oo= 1e9+7;
vector<int > a[maxn];
stack<int> st;
int low[maxn],num[maxn];
int Time=0,ans=0;
int n,m;
int dfs(int u)
{
    ++Time;
    low[u]=num[u]=Time;
    st.push(u);
    for (auto v: a[u])
    {
       if(num[v])
       {
           low[u]=min(low[u],num[v]);
       }
       else 
       {
           dfs(v);
           low[u]=min(low[u],low[v]);
       }
    }
    if(low[u]==num[u])
    {
        ++ans;
        int v;
        do
        {
            v=st.top();
            st.pop();
            num[v]=low[v]=oo;            
        } while (v!=u);
        
    }
    
}

int main()
{
    cin>>n>>m;
    for (int i = 1; i <=m; i++)
    {
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        
    }
    for (int i = 1; i <=n; i++)
    {
        if(!num[i])dfs(i);
    }
    
    cout<<ans;
    
    
    
    return 0;
}
