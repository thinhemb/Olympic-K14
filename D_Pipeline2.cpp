#include <iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long l=0,r=k,m,s;
    while(l<r)
    {
        m=(l+r)/2;
        s=m*k-(m-1)*(m+2)/2;
        if(s<n)
            l=m+1;
        else
            r=m;
    }
    m=(l+r)/2;
    s=m*k-(m-1)*(m+2)/2;
    if(s<n)
        cout<<"-1"<<endl;
    else
        cout<<m<<endl;
 
}