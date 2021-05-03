#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int dp[maxn];
    dp[0]=1;
    for (int i = 1; i <=n; i++)
    {
        if(i>=a && dp[i-a]!=0)dp[i]=max(dp[i],dp[i-a]+1);
        if(i>=b&& dp[i-b]!=0)dp[i]=max(dp[i],dp[i-b]+1);
        if(i>=c&& dp[i-c]!=0)dp[i]=max(dp[i],dp[i-c]+1);
    }
    cout<<dp[n]-1;




    return 0;
}
