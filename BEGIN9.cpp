#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    long long b;
    cin>>a>>b;
    if(b%4==3)
    {
        if(a[a.size()-1]=='5')cout<<5;
        else if(a[a.size()-1]=='0')cout<<0;
        else if(a[a.size()-1]=='1')cout<<1;
        else if(a[a.size()-1]=='6')cout<<6;
        else if(a[a.size()-1]=='5')cout<<5;
        else if(a[a.size()-1]=='4'&&b%4==0)cout<<4;
        else if(a[a.size()-1]=='9'&&b%4==0)cout<<9;
        else if((a[a.size()-1]=='3'||a[a.size()-1]=='7'||a[a.size()-1]=='9')&&b%4==0)cout<<1;
        else if((a[a.size()-1]=='2'||a[a.size()-1]=='4'||a[a.size()-1]=='8')&&b%4==0)cout<<6;
        
    }
    
    return 0;
}
