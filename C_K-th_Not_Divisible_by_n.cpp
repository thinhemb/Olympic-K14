#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long f=k/(n-1);
        long long ans=f*n+(k-(n-1)*f);
        if(ans%n==0)ans-=1;
        cout<<ans<<endl;
    }
    
    
    return 0;
}
