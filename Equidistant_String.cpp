#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s,t,str = "";
    cin>>s;
    cin>>t;
    int dem=0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]==t[i])
        {
            str+=s[i];
        }
        else
        {
            ++dem;
            if(dem % 2 ==0)
            {
                str+=t[i];
            }
            else    
            {
                str+=s[i];
            }
            
        }
        
    }
   if(dem%2==0) 
   {
       cout<<str<<endl; 
   }
    else
    {
        cout<<"impossible\n";
    }
    
    return 0;
}
