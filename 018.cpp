#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n; 
    int l=0,r=n,ck=0;
    while(l<=r)
    {
        ck=0;
        int mid=(l+r)/2;
        //cout<<l<<' '<<r<<" "<<mid<<endl;
        int k=mid,s=mid,minn=100;
        while(k!=0)
        {
            s+=k%10;
            minn=min(k%10,minn);
            //cout<<s<<" "<<minn<<endl;
            k/=10;
        }
        if(s==n)
        {
            cout<<minn<<" "<<mid<<endl;;
           return 0;
        }
        else if(s>n)
        {
            r=mid-1;
            //cout<<r<<" r\n";
        }
        else
         {
            l=mid+1;
            
         }
    }
   cout<<0;
    
    return 0;
}
