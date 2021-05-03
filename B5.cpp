// B5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void Nhap(int* n)
{
    cin >> *n;
}
void Uoc(int n)
{
	for (int i = 1; i < n+1; i++)
	{
		if (n%i==0)
		{
			cout << i<<" ";
		}
		
	}
}
int main()
{
    int n;Nhap(&n);
	Uoc(n);
}


