#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k,a,b;
    cin>>k>>a>>b;
    int f=a/k+b/k;
    if(k>max(b,a))
    {
        cout<<-1;
        return 0;
    }
    if((a>=k && b>=k) || (a && a%k==0) || (b && b%k==0)) cout<<f;
    else cout<<-1;
    return 0;
}
