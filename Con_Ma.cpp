#include <bits/stdc++.h>
using namespace std;
const int manx=1e3+6;
int nx[8]={-2,-2,-1,-1,1,1,2,2};
int ny[8]={-1,1,-2,2,-2,2,-1,1};
int num[manx][manx];
int n,m,bx,by,cx,cy;
void bfs(int x,int y)
{
    num[x][y]=1;
    queue<pair<int,int>>q;
    q.push(make_pair(x,y));
    while (!q.empty())
    {
       pair<int,int>p;
       p=q.front();
       q.pop();
       for (int i = 0; i < 8; i++)
       {
           if (1<=p.first+nx[i] && p.first+nx[i]<=n && 1<= p.second+ny[i] && p.second+ny[i]<=m && num[p.first +nx[i]][p.second+ny[i]]==0)

           {
              q.push(make_pair(p.first + nx[i],p.second+ny[i]));
              num[p.first +nx[i]][p.second+ny[i]] = num[p.first][p.second]+1;
           }
           
       }
       
    }
    
}
int main()
{
    cin>>n>>m>>bx>>by>>cx>>cy;
    bfs(bx,by);
    cout<<num[cx][cy] - 1;
    
    
    return 0;
}
