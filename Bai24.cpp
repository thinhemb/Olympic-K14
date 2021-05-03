

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
	float arr[100];
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		s += arr[i] / 100;
	}
	cout << s*100 / n;
}

