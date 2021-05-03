// Bai20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void Nhap(int* n)
{
    cin >> *n;
}
int NhiPhan(int n)
{
	if (n==0)
	{
		return 0;
	}
	return NhiPhan(n / 2) * 10 + n % 2;
}
int main()
{
	int n;Nhap(&n);
	cout << NhiPhan(n);
}

