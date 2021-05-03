#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char minn='z';
    for (int i=0;i<s.size();i++)
    {
        if(s[i]>minn)
        {
            cout<<"Ann\n";
        }
        else
        {
            minn=s[i];
            cout<<"Mike\n";
        }
        
    }
    
    return 0;
}
