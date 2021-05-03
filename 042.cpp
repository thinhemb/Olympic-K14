#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt = 0;
    while(s[cnt]=='a')
    {
        cnt++;
    }
    if(cnt >= s.size())
    {
        s[s.size()-1] = 'z';
    }
    else
    {
        while(s[cnt]!='a' && cnt<s.size())
        {
            s[cnt]--;
            cnt++;
        }
    }
 
    cout<<s<<endl;
    
    
    return 0;
}
