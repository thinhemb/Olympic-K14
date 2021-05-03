#include <bits/stdc++.h>

using namespace std;
const int manx=1e3+6;
int nx[4]={0,0,-1,1};
int ny[4]={-1,1,0,0},cnt=0;
int num[505][505];
int n,m,k,ans;
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
       for (int i = 0; i < 4; i++)
       {    
           if (1<=p.first+nx[i] && p.first+nx[i]<=n && 1<= p.second+ny[i] && p.second+ny[i]<=m && num[p.first +nx[i]][p.second+ny[i]]==0)
           {
               num[p.first +nx[i]][p.second+ny[i]] =2;
              q.push(make_pair(p.first + nx[i],p.second+ny[i]));
           }   
       } 
    }
}
int main()
{
    
    char str[501][501];
    cin>>n>>m>>k;
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin>>str[i][j];
            if (str[i][j]=='#')
            {
                num[i][j]=1;

            }else
            {
                num[i][j]=0;
                
            }
        }
    }
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <=m; j++)
        {
             if(num[i][j]==0)
             {
                 bfs(i,j);
             }
        }
        
    }
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            cout<<num[i][j];
        }
        cout<<"\n";
        
    }
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            
            if(num[i][j]==0&&cnt<k)
            {
                cout<<"X";
                cnt++;
            }
            else
            cout<<str[i][j];
        }
        cout<<"\n";
        
    }
    
    
    
    return 0;
}
