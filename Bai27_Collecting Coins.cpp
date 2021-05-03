

#include <iostream>
using namespace std;
int max(long long a, long long b, long long c)
{
    if (a >= b && a >= b)return a;
    else if (b >= a && b >= c)return b;
    else
    {
        return c;
    }
}
int main()
{
    int t;
    cin >> t;
    int* arr;
    arr = new int[t];
    long long a, b, c, n;
    for (int i=0; i < t; i++)
    {
        cin >> a >> b >> c >> n;
        long long p = max(a, b, c);
        a = p - a;b = p - b;c = p - c;
        n -= a + b + c;
        if (n>0&&n%3==0)
        {
            arr[i] = 1;
        }
        else { arr[i] = 0; }
    }
    for (int i = 0; i <t; i++)
    {
        if (arr[i] == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
        
    
}

