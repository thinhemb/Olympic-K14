#include <bits/stdc++.h>
using namespace std;
const int manx=1e3+6;
int nx[4]={0,0,-1,1};
int ny[4]={-1,1,0,0},cnt=0;
int num[5005][5005];
int n,m,sx,sy,dx,dy;
void bfs(int x,int y)
{
    num[x][y]=2;
    queue<pair<int,int>>q;
    q.push(make_pair(x,y));
    while (!q.empty())
    {
       pair<int,int>p;  
       p=q.front();
       q.pop();
       int check=0;
       for (int i = 0; i < 4; i++)
       {
           if (1<=p.first+nx[i] && p.first+nx[i]<=n && 1<= p.second+ny[i] && p.second+ny[i]<=n && num[p.first +nx[i]][p.second+ny[i]]==0)
           {
              q.push(make_pair(p.first + nx[i],p.second+ny[i]));
              num[p.first +nx[i]][p.second+ny[i]] =2;
              if((p.first +nx[i])==dx&&(p.second+ny[i])==dy)
              {
                 return;
              }  
           }   
       } 
       
       
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin>>n>>sx>>sy>>dx>>dy;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>num[i][j];
        }
        
    }
    bfs(sx,sy);
    if(num[dx][dy]!=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    
    return 0;
}
