

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
	int count = 0;
	int count1 = 0;
	int a, b;
	while (n--)
	{
		cin >> a >> b;
		if (a>b)
		{
			count++;
		}
		else if(a<b)
		{
			count1++;
		}
	}
	if (count>count1)
	{
		cout << "Mishka";
	}
	else if (count<count1)
	{
		cout << "Chris";
	}
	else
	{
		cout << "Friendship is magic!^^";
	}

	
}

