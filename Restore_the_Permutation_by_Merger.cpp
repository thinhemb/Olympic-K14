#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
        int n;
        cin>>n; 
        int a[n],cnt=0;
        int k;cin>>k;
        a[0]=k;cnt++;
        for (int i = 2; i <=2*n ; i++)
        {
            cin>>k;
            int check=0;
            for(int i=0;i<cnt;i++)
            {
                if(k==a[i])
                {
                    check=1;
                    break;
                }
            }
            if(check==0)a[cnt++]=k;
            if(cnt-1==n)break;
        }
        for (int i = 0; i < cnt; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
       
    }
    
    
    
    return 0;
}
