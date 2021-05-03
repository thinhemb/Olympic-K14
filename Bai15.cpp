

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    long long  a[100]; 
    for (int i = 0; i < q ; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        if (a[i] == 1) cout << 3 << "\n";
        if (a[i] == 2) cout << 2 << "\n";
        if (a[i] > 2 && a[i] % 2 == 0) cout << 0 << "\n";
        if (a[i] > 2 && a[i] % 2 != 0) cout << 1 << "\n";
    }


}

