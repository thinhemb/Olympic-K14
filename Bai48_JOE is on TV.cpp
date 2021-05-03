

#include <iostream>
using namespace std;
int main()
{
    int s;cin >> s;
    float dola = 0;
    for (int i = 0; i < s; i++)
    {
        dola += 1.0 / (i + 1);
    }
    cout << dola;
}

