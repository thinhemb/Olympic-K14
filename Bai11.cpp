

#include <iostream>
using namespace std;
int main()
{
	int n;cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]==1)
		{
			cout << "Hard";
			k++;
			break;
		}
	}
	if (k==0)
	{
		cout << "EASY";
	}

}

