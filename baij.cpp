
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int t=s.size();
    //cout<<t;
    for(int i=0;i<t;i++)
    {
        if(s[i]>='a' and s[i]<='z')
        {
            int cnt=int(s[i-1])-48;
            int cnt1=int(s[i-2])-48;

            if((cnt>=0 and cnt<=9 and cnt1>=0 and cnt1<=9))
            {
                for (int j = 0; j <cnt1*10-1; j++)
                {
                    cout<<s[i];
                }
               
            }
            if(cnt>=2 and cnt<=9 )
            {
                for (int j = 0; j <cnt; j++)
                {
                    cout<<s[i];
                }
            
            }
            else cout<<s[i];
        }
       
    }
}