

#include <iostream>
using namespace std;
int main()
{
    int n;
	cin >> n;
	long long arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max<arr[i])
		{
			max = arr[i];
		}
	}
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += max - arr[i];
	}
	cout << s;
}

