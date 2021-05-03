#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int main()
{
    //ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum[maxn]={0};
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            
        }
        sort(a,a+n);
        int cnt=0,count[maxn]={0};
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                
                sum[cnt]=a[i]+a[j];
                cout<<sum[cnt]<<" ";
                cnt++;

            }
            
        }
        int ma=-1,m;
        for(int i = 0; i < cnt;i++)
        {
            count[sum[i]]++;
            if(count[sum[i]]>ma)
            {
                ma=count[sum[i]];
                m=sum[i];
            }
            
        } 
        int check[n]={0},ans=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(check[i]==0&&check[j]==0&&a[i]+a[j]==m)
                {
                    check[i]=1;
                    check[j]=1;
                    ans++;
                    break;
                }
            }
            
        }
        cout<<ans<<"\n";
        
        
    }
    
    
    return 0;
}
