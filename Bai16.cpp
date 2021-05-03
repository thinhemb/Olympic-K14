

#include <iostream>
using namespace std;
void main()
{
	int arr[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 1)
			{
				
				while (i<2)
				{
					i++;
					count++;
				}
				while (i>2)
				{
					i--;
					count++;
				}
				while (j<2)
				{
					j++;
					count++;
				}
				while (j>2)
				{
					j--;count++;
				}
				cout << count;
				return ;
			}
		}
	}
}

