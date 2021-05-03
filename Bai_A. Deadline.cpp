

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while (t--)
    {
        long long n, d;cin >> n >> d;
        
            if (2 * sqrt(d) - 1 > n)
            {
                cout << "NO" << "\n";
            }
            else
            {
                cout << "YES" << "\n";
            }
        
        
    }
}

