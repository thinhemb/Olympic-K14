#include <iostream>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int   t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        if(n<=k)cout<<k-n<<"\n";
        else
        {
            if((n%2!=0&&k%2==1)||(n%2==0&&k%2==0))cout<<0<<"\n";
            else cout<<"1\n";
        }
    }
    return 0;
}
