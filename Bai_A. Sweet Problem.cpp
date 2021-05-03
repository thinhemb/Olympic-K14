#include <iostream>
using namespace std;
void max(long long a[], int n)
{
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = i+1; j < 3; j++)
		{
			if (a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main()
{
    int t;cin >> t;
	long long a[3];
	while (t--)
	{
		cin >> a[0] >> a[1] >> a[2];
		max(a, 3);
		if (a[0] + a[1] >= a[2])
		{
			cout << (int)(a[0] + a[1] + a[2]) / 2 << endl;
		}
		else
		{
			cout << a[0] + a[1] << endl;
		}
	}
}

