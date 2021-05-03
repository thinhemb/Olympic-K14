#include <iostream>
#include<queue>
using namespace std;
const int maxn=5e3+5;
int n,m;
int nx[4]={0,0,1,-1};
int ny[4]={1,-1,0,0};
int cnt=0;
int num[maxn][maxn];
void BFS(int x,int y)
{
    num[x][y]=1;
    cnt++;
    queue<pair<int,int>>q;
    q.push(make_pair(x,y));
    while (!q.empty())
    {
       pair<int,int>p;
       p=q.front();
       q.pop();
       for (int i = 0; i < 4; i++)
       {
           if (1<=p.first+nx[i] && p.first+nx[i]<=n && 1<= p.second+ny[i] && p.second+ny[i]<=m && num[p.first +nx[i]][p.second+ny[i]]==0)
           {
              q.push(make_pair(p.first + nx[i],p.second+ny[i]));
              num[p.first +nx[i]][p.second+ny[i]] = num[p.first][p.second]+1;
              cnt++;
           }
           
       }
       
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin>>n>>m;
    char t;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            
            cin>>t;
            num[i][j]=int(t)-48;
            if (num[i][j]==1)
            {
                cnt++;
            }
            
        }
        
    }
    for (int i = 1; i <=m ; i++)
    {
        if(num[1][i]==0)
        {
            BFS(1,i);
        }
        if (num[n][i]==0)
        {
            BFS(n,i);
        }
        
    }
    for (int i = 2; i <=n-1; i++)
    {
        if(num[i][1]==0)BFS(i,1);
        if (num[i][m]==0)BFS(i,m);
    }
    cout<<m*n-cnt<<endl;
    return 0;
}

