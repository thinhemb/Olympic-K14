#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[101];
    cin.getline(str,101);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i]=='/'&&str[i-1]=='/')
        {
            for (int j = i; j < len; j++)
             str[j]=str[j+1];    
            
            --len;
            i--;
        }
    }
    
    if (str[len-1]=='/'&&len>1)
    {
       for (int i = 0; i < len-1; i++)
       {
          cout<<str[i];
       }
       
    }
    else
    cout<<str<<endl;
    
}
