

#include <iostream>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int count=0;
        for (int i = 1; i <10; i++)
        {
            long long k = i;
            while (k <= n)
            {
                k = k * 10 + i;
                count++;
            }
        }
        cout << count << "\n";
    }
}

