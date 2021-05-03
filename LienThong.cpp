#include <iostream>
#include<stack>
#include<vector>
using namespace std;
int n,m,ans=0,cx[100]={0};
stack <int> s;
vector <int> e[100];
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
        //cout<<u<<" ";
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
    for (int i = 1; i <= n; i++)
    {
        if (cx[i]==0)
        {
            ans++;
            DFS(i);
        }
        
    }
    cout<<ans;
    
    
    
    
    return 0;
}
