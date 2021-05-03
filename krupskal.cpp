#include <bits/stdc++.h>
using namespace std;
 const int maxn=1e5+5;
 int n,m;
 int pa[maxn],layed[maxn];
 struct edge
 {
     int u,v,w;
 } ed[maxn];
 bool cmp(edge a,edge b)
 {
     return a.v<b.v;
 }
 int root (int x)
 {
     if(pa[x]==x)
     return x;
     else return root (pa[x]);
 }
int main()
{
    
    cin>>n>>m;
    for (int i = 1; i <= m; i++)
    {
        cin>>ed[i].u>>ed[i].v>>ed[i].w;
        

    }
    sort(ed+1,ed+m+1,cmp);
    for (int i = 1; i <=n; i++)
    {
       pa[i]=i;
    }
    int cnt=0;
    for (int i = 1; i <=m; i++)
    {
        if(cnt<n-1)
        {
            if(root(ed[i].u)!=root(ed[i].v))
            {
                layed[i]=1;
                pa[root(ed[i].v)]= root(ed[i].v);
                cnt++;
            }
        }
        else break;
    }
    if(cnt<n-1)cout<<-1;
    else
    {
        for (int i = 1; i <=m ; i++)
        {
            if(layed[i]==1)
            {
                cout<<ed[i].u<<" "<<ed[i].v<<endl;
            }
        }
        
    }
// 7 9
// 1 2 1
// 1 3 10 
// 1 5 4
// 2 3 3
// 2 4 2
// 3 4 3
// 3 5 5
// 3 6 6
// 5 7 7
    
    
    
    
    
    return 0;
}
