#include <iostream>
#include<algorithm>
using namespace std;
const int maxn=1e5+1;
int main()
{
    int n;
    cin>>n;
    int a[maxn];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])cnt++;
        a[i]+=a[i-1];
    }
    cout<<cnt;
    
    return 0;
}
