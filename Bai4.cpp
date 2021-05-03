

#include <iostream>
using namespace std;
int main()
{
	int p;cin >> p;
	long long  n;
	int a,b;
	
	for (int i = 0; i < p; i++)
	{
		cin >> n >> a >> b;
		if (b/a<2)
		{
			cout<< (n / 2) * b + n % 2 * a<<"\n";
		}
		else
		{
			cout<< n*a<<"\n";
		}
	}
	
}

