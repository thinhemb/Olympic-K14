

#include <iostream>
using namespace std;
int main()
{
    int t;cin >> t;
   
	while (t--)
	{
		int n;cin >> n;
		if (n == 1)
		{
			cout << -1 << "\n";
		}
		else
		{
			while (n--)
			{
				cout << 7;
				if (n == 1)
				{
					cout << 8<<"\n";
					break;
				}
			}
		}
	}
	
}

