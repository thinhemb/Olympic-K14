#include <iostream>
#include<queue>
using namespace std;
queue <char> q;
int main()
{
    string str;
    getline(cin,str);
    
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]!='*')
        {
            q.push(str[i]);
        }
        else if (q.empty()==true)
        {
           continue;
        }
        else
        {
            cout<<q.front()<<" ";
            q.pop();
        }
        
        
        
    }
    
    
    
    
    system("pause");
    return 0;
}
