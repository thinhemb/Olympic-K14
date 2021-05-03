#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int check=0;
    while (n--)
    {
        int a;
        cin>>a;
        if(a==1)check=1;
    }
    if(check==1)cout<<-1;
    else cout<<1;
    
    
    return 0;
}
