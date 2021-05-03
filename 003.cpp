#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	double h;
	cin>>n>>h;
	double a=h/2/n,f=a;
	for(int i=1 ; i < n;i++)
    {
		printf("%.10lf ",sqrt(f*2*h));
		f+=a;
	}
}