#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int check[maxn]={0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int boy[maxn],girl[maxn];
    for (int i = 0; i < n; i++)
    {
        cin>>boy[i];
    }
    int m;
    cin>>m;
    
    for (int i = 0; i < m; i++)
    {
       cin>>girl[i];
    }
    sort(boy,boy+n);
    sort(girl,girl+m);
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if( fabs(boy[i]-girl[j]) < 2 && check[j]==0)
            {
                cnt++;
                check[j]=1;
                break;
            }
        }
        
    }
    cout<<cnt;
    
    
   
    return 0;
}
