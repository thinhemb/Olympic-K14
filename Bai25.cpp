

#include <iostream>
using namespace std;
int main()
{
    int a, b;
	cin >> a >> b;
	if (a<b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << b <<" "<<(a-b)/2;

}

