#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       long long a[4],x,y,z;
       cin>>x>>y>>z;
        if(x>z)swap(x,z);
        if(y>z)swap(y,z);
        if(x>y)swap(x,y);
        //cout<<x<<y<<z;
        if(x==z ) 
        {
            cout<<"YES\n";
            cout<<x<<" "<<y<<" "<<z<<"\n";
        }
        else if(z==y&&y>x)
        {
            cout<<"YES\n";
            if(x-1>0)
            cout<<x-1<<" "<<z<<" "<<x<<"\n";
            else
            {
                cout<<z<<" "<<x<<" "<<x<<"\n";
            }
            
        }

        else cout<<"No\n";
        
    }
    
    
    
    return 0;
}
