#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,cnt=0;
    cin>>n>>a>>b;
    a--;b--;
    while (a!=b)
    {
        a/=2;
        b/=2;
        cnt++;
        n/=2;
    }
    if(n==1)cout<<"Final!";
    else
    cout<<cnt;
    
    
   
    return 0;
}
