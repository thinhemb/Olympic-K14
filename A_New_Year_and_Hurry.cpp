#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int left=1,right=n;
    int dl=240-k,ans;
    while(left<=right)
    {
        int mid=(left+right)/2;
        //cout<<mid<<endl;
        if(mid*(mid+1)/2*5>dl)
        {
            //cout<<mid*(mid+1)/2*5<<endl;
            //cout<<dl<<endl;
            right=mid-1;
        }
        else left=mid+1;

    }
    cout<<right;
    
    return 0;
}
