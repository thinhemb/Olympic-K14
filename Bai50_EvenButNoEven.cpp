

#include <iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;cin >> n;
		string str;
		cin >> str;
		int count = 0, sum = 0;
		for (int i = 0; i < n; i++)
		{
			int x = str[i] - 48;
			if (x % 2 == 1)
			{
				count++;
				sum = sum * 10 + x;
				if (count >= 2)
				{
					cout << sum << "\n";
					break;
				}
			}
		}
		if (count == 0||count==1) cout << "-1\n";
	}
}

