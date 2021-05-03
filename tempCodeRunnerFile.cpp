#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,x,y,n,minb,mina,k=0;
        cin>>a>>b>>x>>y>>n;
        
        
            if(b-n>y)minb=b-n;
            else 
            {
                minb=y;
                k=n-(b-y);
            } 
            if(a-k>x)mina=a-k;
            else mina=x;
            long long ans1=minb*mina;
            k=0;
            if(a-n>x)mina=a-n;
            else 
            {
                mina=x;
                k=n-(a-x);
            } 
            if(b-k>y)minb=b-k;
            else minb=y;
            long long ans2= minb*mina;
        cout<<min(ans1,ans2)<<"\n";
        
        
    }
    
    
    return 0;
}
