#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       string str;
        cin>>str;
        if(str[0]!=str[str.length()-1])
        {
            if(str.length() %2 ==0)
            cout<< "Bash"<<endl;
            else
            {
                cout<<"Chikapu"<<endl;
            }
        }
        else
        {
            if(str.length() % 2==0)
            cout<< "Chikapu "<<endl;
            else
            {
                cout<<"Bash "<<endl;
            }
        }
          
    }
    
    return 0;
}
