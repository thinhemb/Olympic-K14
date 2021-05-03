#include <iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string str;
   
    while (t--)
    {
        int n;
        cin >> n;
        cin >> str;
        int k = 0;
        if (n > 10)
        {
            for (int j = 0; j < n - 10; j++)
            {
                if (str[j] == '8')
                {
                    cout << "YES\n";
                    k++;
                    break;
                }
                
            }
            if (k==0)
            {
                cout << "No\n";
            }
        }
        else
        {
            cout << "No\n";
        }
    }
}