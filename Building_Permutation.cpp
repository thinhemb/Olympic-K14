#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long *a= new long long[n];
    for (long i = 0; i <n ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long tong=0;
    for (long long i = 1; i <= n; i++)
    {
        tong+=abs(i-a[i-1]);
    }
    cout<<tong<<endl;
    

    return 0;
}
