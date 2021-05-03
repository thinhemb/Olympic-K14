#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    string s1,s2;
    cin>>s1>>s2;
    int check=1,cnt=0,count=0;
    for (int i = 0; i <s2.size(); i++)
    {
        if(s1[i]==s2[i+1]&&s1[i+1]==s2[i])
        {
            count++;
            i++;
            continue;
        }
        if(s1[i]!=s2[i])cnt++;
    }
    
    cout<<cnt+count<<endl;
   
    return 0;
}
