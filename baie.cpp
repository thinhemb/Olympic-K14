#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long  sumt=0,sumb=0;
    int n;
    cin>>n;
    for (int  i = 0; i <n; i++)
    {
        long long x,y,z;
        cin>>x>>y>>z;
        if(x>y)sumt+=z;
        else if(y>x)sumb+=z;
    }
    if(sumb==sumt)cout<<-1;
    else if(sumb>sumt)cout<<"Joe Biden";
    else cout<<"Donald Trump";
    
	
	
	
	return 0;
}
