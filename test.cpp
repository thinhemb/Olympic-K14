#include <bits/stdc++.h>
using namespace std;
const int maxn=30005;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int x[3],y[3];
	for (int i = 0; i < 3; i++)
	{
		cin>>x[i]>>y[i];
	}
	double k1=sqrt(pow(x[0]-x[1],2)+pow(y[0]-y[1],2));
	double k2=sqrt(pow((x[1]-x[2]),2)+pow(y[1]-y[2],2));
	double k3=sqrt(pow((x[2]-x[0]),2)+pow(y[2]-y[0],2));
	if(k1+k2<=k3||k1+k3<=k2||k3+k2<=k1)
	cout<<"Co\n";
	else cout<<"Khong\n";
	
	
	
	
	return 0;
}
