#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
	long long n,m,s;
	cin>>n>>m>>s;
	long long a=n%s,b=m%s,c=n/s,d=m/s;
    if(a==0) 
    {
    	a=s;
	}
    else 
    {
    	c++;
	}
    if(b==0) 
    {
    	b=s;
	}
    else 
    {
    	d++;
	}
    cout<<a*b*c*d<<endl;
    return 0;
}
