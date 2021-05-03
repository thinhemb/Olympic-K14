

#include <iostream>
using namespace std;
int SoNt(int x)
{
    int count = 0;
    if (x % 2 == 0)    
    {   
        count++;
        return 1;
    }
    for (int i = 3; i < x/2; i+=2)
    {
        if (x%i==0)
        {
            count++;
            break;
        }
    }
    if (count != 0)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    long long x;cin >> x;
    int count=0;
    for (long long i = 2; i <=x; i++)
    {
        if (x % i == 0)
        {
            x /= i;
            count++;
            i = 1;
            continue;
        }
        if (SoNt(x)==0)
        {
            count++;
            break;
        }
    }

    cout << count;
}

