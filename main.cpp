#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+2;
long long  n;


int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    bool prime[maxn+1];
    for (long long i=2; i<=maxn; i++)
        prime[i]=true;
    prime[0] = false;
    prime[1] = false;
    for (long long i=2; i*i<=maxn; i++)
        if (prime[i]==true)
            for (long long j=i*i; j<=maxn; j+=i)
                prime[j]=false;
	while(n--)
	{
		string s;
		cin>>s;
		long long ans=0;
		int check=1;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!='3'&&s[i]!='4'&&s[i]!='7')
			{
					ans+=int(s[i])-48;
			}
			else check=0;
		}
		if(check==0||prime[ans]==0)
		{
			cout<<"No"<<endl;
		}
		else cout<<"Yes"<<endl;
	}
}
