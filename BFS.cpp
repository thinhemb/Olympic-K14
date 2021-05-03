#include <bits/stdc++.h>

using namespace std;
queue <int> q;
int cx[100]={0},y,n,m;
vector <int> e[100];
void BFS(int x)
{
    q.push(x);
    cx[x]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v : e[u])
        {
            if(cx[v]==0)
            {
                cx[v]=1;
                q.push(v);
            }
          
        }
    }

}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    BFS(1);
    
   
    return 0;
}
