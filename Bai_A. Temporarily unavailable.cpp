

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;cin >> t;
	while (t--)
	{
        int A, B;
        int a, b, c, r;
        cin >> A >> B >> c >> r;
        a = min(A, B), b = max(A, B);
        if (c - r <= a && b <= c + r) {
            cout << 0 << endl;
            continue;
        }
        if (c + r < a || b < c - r) {
            cout << (b - a) << endl;
            continue;
        }
        cout << max(c - r - a, 0) + max(b - c - r, 0) << endl;
	}
		
	
}

