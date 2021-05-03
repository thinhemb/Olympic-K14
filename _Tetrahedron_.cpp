#include <iostream>
using namespace std;
long long f[10000007];
int main()
{

    int n;
    cin >> n;
    f[0] = 1;
    f[1] = 0;
    for (int  i = 2; i <= n; i++)
    {
        f[i] = (3 * f[i - 2] + 2 * f[i - 1]) % 1000000007;
    }
        
    cout << f[n]<<endl;
    return 0;
}