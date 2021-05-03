

#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    int a, b,arr[100];
	int count = 0,count1=0;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		while (a>b)
		{
			count1++;
			b += count1;
			count++;
		}
		while (a<b)
		{
			count1++;
			a+= count1;
			count++;
		}
		if (a==b)
		{
			arr[i] = count;
		}
	}
	for (int i = 0; i < t; i++)
	{
		cout << arr[i]<<endl;
	}
}

