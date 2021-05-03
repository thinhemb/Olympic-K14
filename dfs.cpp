#include<bits/stdc++.h>
using namespace std;
int n,m;
int cx[100]={0},y;
vector <int> e[100];
stack <int> s;

void dfs(int x)
{
    // sử dụng đệ quy
    cx[x]=1;
    cout<<x<<" ";
    // Cách 1
//    for (int i = 0; i < e[x].size(); i++)
//    {
//        if( cx[e[x][i]]==0)
//        dfs(e[x][i]);
//    }
//    cach 2
    for (auto y : e[x] )
    {
        if(cx[y]==0)
        dfs(y);
    }

}
void DFS(int x)
{
    // khử đệ quy
    while (!s.empty())s.pop();
    s.push(x);
    cx[x]=1;
    while (!s.empty())
    {
        int u=s.top();
        s.pop();
        cout<<u<<" ";
        // Cách 1
        for ( int v: e[u])
        {
            if(cx[v]==0)
            {
                cx[v]=1;
                s.push(v);
            }
        }
        // Cách 2
        // for (int i = 0; i < e[u].size(); i++)
        // {
        //     if( cx[e[u][i]]==0)
        //     {
        //         cx[e[u][i]]=1;
        //         s.push(e[u][i]);
        //     }

        //  }
    }

}
int main()
{
    cin>>n>>m;
    for (int i = 1; i <= m; i++)
    {
        int u,v;
        cin>>u>>v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
        
    // dfs(1);
    cout<<endl;
    DFS(1);
     



    return 0;
}
