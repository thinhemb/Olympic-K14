#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,d;
    cin>>n>>d;
    int a[101],cnt=0;
    for (int i = 0; i <n ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ans = n - 1;
    for(int i=0;i< n;i++) 
    {
        while (cnt < n && a[cnt] - a[i] <= d) cnt++;
        ans = min(ans, n - cnt + i);
    }
    cout << ans << endl;
    
    
    return 0;
}
