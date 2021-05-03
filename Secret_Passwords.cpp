#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+3;
vector <int> e[maxn];
queue <int> q;
int check[maxn]={0};
void BFS(int x)
{
    q.push(x);
    check[x]=1;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        for ( int v: e[u])
        {
            if(check[v]==0)
            {
                check[v]=1;
                q.push(v);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        string s;
        cin>>s;
        for (int j = 0; j < s.size(); j++)
        {
            int x=(int)(s[j]-'a'+n+1);
            e[i].push_back(x);
            e[x].push_back(i);
        }
        
    }
    int ans=0;
    for (int i = 1; i <=n; i++)
    {
        if(check[i]==0)
        {
            BFS(i);
            ++ans;
        }
        
    }
    cout<<ans;
    
    
    return 0;
}
