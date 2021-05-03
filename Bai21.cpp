

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
	int arr[2000];
	int ar[2000];
	int n;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int k = 0; k < n; k++)
		{
			cin >> ar[k];
			if (ar[k]%2==1)
			{
				arr[i] +=ar[k] ;
			}
		}
	}
	for (int i = 0; i < t; i++)
	{
		if (arr[i]%2==0)
		{
			cout << "NO"<<endl;
		}
		else
		{
			cout << "YES"<<endl;
		}
	}
}

