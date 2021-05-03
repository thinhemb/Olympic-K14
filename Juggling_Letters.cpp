#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1;
        for (int i = 0; i <n; i++)
        {
           cin>>s1;
           s+=s1;
        }
        int count[26] = {0};
        int check=0;
        for(int i = 0; i < s.size(); ++i)
            count[s[i] - 'a']++;
        for(int i = 0; i < 26; ++i)
        {
            if(count[i]%2==1)
            {
                check=1;
                break;
            }
            //if(count[i])
            //printf("%c %d\n", i+'a', count[i]);
        }
            if(check==1)cout<<"NO\n";
            else cout<<"YES\n";
    }
    
    
    return 0;
}
