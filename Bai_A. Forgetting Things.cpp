

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b;cin >> a >> b;
	if ( a == 9 && b == 1)
	{
		cout << "9 10";
	}
	else if ( a <= b)
	{
		if (abs(a - b) == 1)
		{
			cout << a << " " << b;
		}
		else if (abs(a - b) == 0)
		{
			cout << a * 10 << " " << b * 10 + 1;
		}
		else
		{
			cout << "-1\n";
		}
	}
	else
	{
			cout << -1;
	}

	
	
	
}

