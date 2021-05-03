

#include <iostream>
using namespace std;
int main()
{
    int n;cin >> n;
	long long a[100000];
	long long count = 0,dem=0,k=-1;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i]<0)
		{
			count += -1 - a[i];
			dem++;
		}
		else if (a[i]>0)
		{
			count += a[i] - 1;
		}
		else
		{
			k = i;
			count++;
		}
	}
	 if (dem % 2 != 0 && k == -1)
	{
			count += 2;
	}
	cout << count;


}

