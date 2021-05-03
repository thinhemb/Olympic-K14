
#include <iostream>
using namespace std;
int Sum(float a[], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += int(a[i]);
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    float a[100000];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += int(a[i]);
    }
    if (sum<0)
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i]>0)
            {
                a[i]++;
            }
            if (Sum(a,n) == 0)
            {
                break;
            }
        }
    }
    if (sum > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                a[i]--;
            }
            if (Sum(a, n) == 0)
            {
                break;
            }
        }
    }
    if (sum < 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                a[i]++;
            }
            if (Sum(a, n) == 0)
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << int(a[i]) << "\n";
    }
}

