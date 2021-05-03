#include <bits/stdc++.h>
using namespace std;
map<string,int> ma;
string s1[200005];
int main()
{
    int n;
    cin>>n;
    string s;
    
    for(int i=n; i >= 1;i--)
    {
        cin>>s1[i];
    }
    for (int i = 1; i <=n; i++)
    {
        s=s1[i];
        if(ma[s]==0)
        {
            cout<<s<<endl;
            ma[s]=1;
        }
    }
    
    return 0;
}
