#include <bits/stdc++.h>
using namespace std;
vector <int> s;
int main()
{
    int n,a,x,b,y,check=0;
    cin>>n>>a>>x>>b>>y;
    for (int i = 0; i <n; i++)
    {
        if(a+1>n)a=0;
        if(b-1==0)b=n+1;
        a+=1;
        b-=1;
        
        if(a==b)
        {
            check=1;
            break;
        }
        if(a==x||b==y) break;
    }
    if (check==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    
    
    
    return 0;
}
