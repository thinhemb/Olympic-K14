#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s,a,b;
   int ls,la,lb,ia=0,ib=0,o=0;
	cin>>s>>a>>b;
	ls=s.size();
	la=a.size();
	lb=b.size();
	for(int i=0;i<ls;i++)
	{
		
		if(ia<la)
		{
			if(s[i]==a[ia])ia++;
		}
		else if(ib<lb)
		{
			if(s[i]==b[ib])ib++;
		}
	}
	if(ia==la&&ib==lb)o++;
	ia=ib=0;
	for(int i=ls-1;i>=0;i--)
	{
		if(ia<la)
		{
			if(s[i]==a[ia])ia++;
		}
		else if(ib<lb)
		{
			if(s[i]==b[ib])ib++;
		}
	}
	if(ia==la&&ib==lb)o+=2;
	if(o==1)cout<<"forward\n";
	else if(o==0)cout<<"fantasy\n";
	else if(o==2)cout<<"backward\n";
	else if(o==3)cout<<"both\n";
	return 0;
}