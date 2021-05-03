#include <iostream>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long left=1,right=n,ans=0;
    while (left<=right)
    {
        long long mid=(right+left)/2;
        
        long long x=mid*(mid+1)/2-(n-mid);
        if(x==k)
        {
            cout<<n-mid;
            return 0;
        }
        if(x>k) right=mid-1;
        else
        {
            left= mid+1;
        }
        
    }
    
    return 0;
}
