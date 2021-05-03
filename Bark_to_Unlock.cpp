#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>>s;
    int n;
    cin>>n;
    int check=0,l=0,r=0;
    string s1;
    for (int i = 1; i <= n; i++)
    {
        
        cin>>s1;
        if((s1[1]==s[0]&&s1[0]==s[1])||(s1[1]==s[1]&&s[0]==s1[0]))
        {
            check=1;
        }
        if(s[1]==s1[0])l=1;
        if(s[0]==s1[1])r=1;
    }
    if((r==1&&l==1)||check==1)cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}
