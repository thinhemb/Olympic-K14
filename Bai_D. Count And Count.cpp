

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a -= b; 
        }
        else {
            b -= a;
        }
    }
    return a; 
}
int main()
{
	int Q, n,dem=0;
		cin >> Q;
		int a[10000];
		for (int j = 0;j < Q;j++) 
		{
			cin >> n;
			 dem = 0;
			for (int i = 2;i < n;i++) 
			{
				if (gcd(i, n) != 1 && gcd(i, n) != i) dem++;
			}
			
		}
		cout << dem << "\n";
		return 0;
}


