#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        string s;
        fflush(stdin);
        getline(cin,s);
                int count=0;
        for (int i = 0; i < s.size(); i++)
    {
        if (s[i]==' '&& s[i+1]!=' ')
        {
           count++;
        }
        
    }cout<<count+1<<endl;
    }
    
}