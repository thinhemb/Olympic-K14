

#include <iostream>
using namespace std;
void Maxr(long long &r, long long &g, long long &b)
{
	long long max =r ;
	if (max < g)
	{
		max = g;
		g = r;
		r = max;
	}
	if (max < b) 
	{
		max = b;
		b = r;
		r = max;
	}
}

int main()
{
    int t;
    cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long r, g, b;
		cin >> r >> g >> b;
		Maxr(r, g, b);
		if (r <= g + b+1)
		{
			cout << "Yes" << "\n";
		}
		else cout << "No" << "\n";
	}
}

