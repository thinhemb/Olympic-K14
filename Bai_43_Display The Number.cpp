
#include <iostream>
using namespace std;
int main()
{
    int t;cin >> t;
	long long a[100];
	int n;
	for (int i = 0; i < t; i++)
	{
		cin >> n;a[i] = 0;
		if(n%2!=0)cout << "7";
		while (n != 3 && n!=0)
		{
			cout << "1";
			n -= 2;
		}
		cout << "\n";
	}
	
}

