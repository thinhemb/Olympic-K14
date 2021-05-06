
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' and s[i]<='z')
        {
                cout<<s[i];
            
        }else 
        {
                int sum=0;
                for (int  k = i; k < s.size(); k++)
                {
                    int cnt=int(s[i])-48;
                    if(cnt>=0 and cnt<=9)
                    {
                        sum=sum*10+cnt;
                    }
                    else
                    {
                        i=k;
                        break;
                    } 
                }
                for (int j = 0; j <sum; j++)
                {
                        cout<<s[i];
                }
        }
    }
}