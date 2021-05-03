

#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char* str;
    str = new char[n];
    cin >> str;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i]=='x'&&str[i+1]=='x'&&str[i+2]=='x')
        {
            count++;
        }
    }
    cout << count;
}

