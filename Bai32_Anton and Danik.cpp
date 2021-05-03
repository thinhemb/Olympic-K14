

#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int a = 0;
    int d = 0;
    char t;
    for (int i = 0; i < n; i++)
    {
        t = str[i];
        if (t == 'A')
        {
            a++;
        }
        else d++;
    }
    if (a > d)
    {
        cout << "Anton";
    }
    else if (d > a) cout << "Danik";
    else cout << "Friendship"<<endl;
}

