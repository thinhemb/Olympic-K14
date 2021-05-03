
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long x;
		cin >> x;long long temp = x;
		while (x > 9)
		{	
			long long h = x;
			x = x / 10;
			temp += x;
			x+=h % 10;
			
		} 
		cout << temp << "\n";
	}
	
}
