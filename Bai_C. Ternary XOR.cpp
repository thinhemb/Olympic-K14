

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		int* a, *b;
		a = new int[n];
		b = new int[n];
		cin >> s;
		int count=0;
		for (int i = 0; i < n; i++)
		{
			if (count!=0)
			{
				if (s[i] == '1')
				{
					a[i] = 0;
					b[i] = 1;
				}
				else if (s[i] == '2')
				{
					a[i] = 0;
					b[i] = 2;
				}
				else
				{
					a[i] = 0;
					b[i] = 0;
				}
			}
			else
			{
				
				if (s[i] == '1')
				{
					a[i] = 1;
					b[i] = 0;
					count++;
				}
				else if (s[i] == '2')
				{
					a[i] = 1;
					b[i] = 1;
				}
				else
				{
					a[i] = 0;
					b[i] = 0;
				}
			}
			
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] ;
		}
		cout << "\n";
		for (int i = 0; i < n; i++)
		{
			cout << b[i] ;
		}
		cout << "\n";
		
		
	}
}

