#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,x,y;
    cin>>a>>x>>y;
    if (0 < x && x < a && 0 < y && y < a) 
    {
        cout<<0;
    } 
    else if (0 <= x && x <= a && 0 <= y && y <= a) 
    {
        cout<<1;
    }
    else cout<<2;
    
    return 0;
}
