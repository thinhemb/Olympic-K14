

#include <iostream>
using  namespace std;
int main()
{
    int t;
    cin >> t;
	int x, y;
	for (int i = 0; i < t; i++)
	{
		cin >> x >> y;
		if (x == 1 && y > 1)
		{
			cout << "No" << "\n";
		}
		else if ((x == 2 || x == 3) && y > 3)cout << "No" << "\n";
		else cout << "Yes" << "\n";
	}
}

