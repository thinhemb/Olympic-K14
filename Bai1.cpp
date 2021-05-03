// Bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, k, t;
    cin >> t;
    int ar[100], arr[100],ar1[100];
    for (int i = 0; i < t; i++)
    {
        
        cin >> a >> b >> c >> d >> k;
        ar1[i] = k + 1;
        if (a % c != 0)
        {
            ar[i] = a / c + 1;
        }
        else
        {
            ar[i] = a / c;
        }
        if (b % d != 0)
        {
            arr[i] = b / d + 1;
        }
        else
        {
            arr[i] = b / d;
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (ar[i] + arr[i] < ar1[i])
        {
            cout <<"\n"<< ar[i] << " " << arr[i] ;
        }
        else
        {
            cout << "\n-1";
        }
    }
    
}
