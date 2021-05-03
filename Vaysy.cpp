#include <iostream>
 
using namespace std;
 
int main()
{
    
    int n,m;
    cin>>n>>m;
    int minn=0;
    int ma=n*(n-1)/2,ans=n-1;
    if ((n-m*2)>0)
    {
        minn=n-m*2;
    }
     int maxn=0;
     if(m==0 )maxn=n;
     else if(n==1&&m==1)maxn=0;
     else if( m==1) maxn=n-2;
    
     else if(n*(n-1)/2-(n-1)<m)
    {
        maxn=0;
    }else
    {
        int mx=ma;
        ans--;
        int i=1;
        while(i++<=n)
        {
            if(mx>=m)
        {
            maxn=ans-1;
            break;
        }
         mx-=(n-i);
         
        
        
        }
    }
    
    
    
    
    cout<<minn<<" "<<maxn<<"\n";

    return 0;
}