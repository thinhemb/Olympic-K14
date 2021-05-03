// Bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a1[1000];
    int  a, b;
    for (int i = 0;i < n;i++)
    {
        int count=0;
        cin >> a >> b;
        a = abs(a-b);
        a1[i] = a / 5 + (a % 5 + 1) / 2;
    }
    for (int i = 0;i < n;i++)
    {
        cout << a1[i] << endl;
    }
}


