#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str,s1;
    s1="";
    fflush(stdin);
    getline(cin,str);
    for (int i = 0; i <str.length() ; i++)
    {
       if(str[i]!='A'&&str[i]!='a'&&str[i]!='O'&&str[i]!='o'&&str[i]!='Y'&&str[i]!='y'&&str[i]!='U'&&str[i]!='u'&&str[i]!='E'&&str[i]!='e'&&str[i]!='I'&&str[i]!='i')
       {
           s1+='.';
           if(str[i]>'A'&&str[i]<='Z')
           s1+=str[i]+32;
           else
           s1+=str[i];
       }
    }
    cout<<s1;

    
    
    return 0;
}
