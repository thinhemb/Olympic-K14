

#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
	int count = 0;
	for (int i = 1; i < n/2+1; i++)
	{
		if (n % i==0 && (n-i)%i==0)
		{
			count++;
		}
	}
	cout << count;
}

