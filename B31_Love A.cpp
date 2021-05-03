

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string  s;
    cin >> s;
    int nona = 0;
    int a = 0;
    int len = s.size();

    for (string::size_type i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            a += 1;
        }
        else {
            nona += 1;
        }
    }
    if (a <= (len / 2) + 1) {
        cout << 2 * a - 1 << endl;
    }
    else {
        cout << len << endl;
    }

    return 0;
}

 