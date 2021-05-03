#include<iostream>
#include<algorithm>
#include <string>
using namespace std;
long long f[1000005];
int main()
{
	long long k, n, count = 0, count1;
	cin >> k;
	string str;
	cin >> str;
	f[0] = 1;
	count1 = 0;
	for (int i = 0; i < str.length(); i++) 
	{
		if (str[i] == '1')
			count++;
		if (count >= k)
			count1 += f[count - k];
		f[count]++;
	}
	cout << count1<<endl;
  return 0;
}