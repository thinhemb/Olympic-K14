
#include<algorithm>
#include <iostream>
using namespace std;
int main()
{
    int t;cin >> t;
	while (t--)
	{
		int a[3];
		int count = 0;
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		for (int i = 0; i < 3; i++)
		{
			if (a[i]>0)
			{
				count++;
				a[i]--;
			}
		}
		if (a[0] > 0 && a[2] > 0)
		{
			count++;
			a[0]--;a[2]--;
		}
		if (a[2] > 0 && a[1] > 0)
		{
			count++;
			a[2]--;a[1]--;
		}
		if (a[0]>0&&a[1]>0)
		{
			count++;
			a[0]--;a[1]--;
		}
		if (a[1]>0&&a[2]>0&&a[0]>0)
		{
			count++;
		}
		cout << count << "\n";
	}
}

