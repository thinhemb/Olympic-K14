

#include <iostream>
#include<string.h>
using  namespace std;

int main()
{
    int t;
    cin >> t;
	int a[100];
	for (int i = 0; i < t; i++)
	{
		char str[100];
		cin>>str;
		int slength = strlen(str);
		int count = 0;
		for (int k = 1; k < slength; k += count+1)
		{
			if (str[k] == '0' && str[k - 1] == '1')
			{
				for (int j = k + 1; j < slength; j++)
				{
					if (str[j] == '1')
					{
						count += j - k;
						break;
					}
				}
			}
			
		}
		a[i] = count;
	}
	for (int i = 0; i < t; i++)
	{
		cout << a[i] << endl;
	}
	

}

