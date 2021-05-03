#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long p;
    cin>>p;
    while (p--)
    {
        long long c,m,x;
        cin>>c>>m>>x;
        if(m>c)swap(c,m);
        long long minn=min(c,m);
        long long min1=min(minn,x);
        c-=min1;m-=min1;x-=min1;
        if(m>0) 
        {
            long long ans=(c+m)/3;
            min1+=min(ans,m);
        }
       cout<<min1<<endl;
        
        
    }
    
    
    
    return 0;
}
