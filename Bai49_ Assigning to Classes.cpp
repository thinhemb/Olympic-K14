

#include <iostream>
using namespace std;
void QuickSort(long long Data[], int l, int r)
{
	
	if (l <= r)
	{
		int key = Data[(l + r) / 2];
		int i = l;
		int j = r;
		while (i <= j)
		{
			while (Data[i] < key)
				i++;
			while (Data[j] > key)
				j--;

			if (i <= j)
			{
				swap(Data[i], Data[j]);
				i++;
				j--;
			}
		}
		if (l < j)
			QuickSort(Data, l, j);
		if (r > i)
			QuickSort(Data, i, r);
	}
}
int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long* a;
        a = new long long[2 * n];
        for (int i = 0; i < 2*n; i++)
        {
            cin >> a[i];
        }
		QuickSort(a, 0, 2 * n-1);
		
		cout << a[n]-a[n-1] << "\n";
    }
}

