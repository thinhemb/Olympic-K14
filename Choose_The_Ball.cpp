#include<bits/stdc++.h>
using namespace std;
const int maxn =1e5+5;
int n;
vector <int> a;
pair<int,int> b[maxn];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int m;//long long x;
    int e;int luu;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    for(int i=1;i<n;i++ )
    {
        b[i]=make_pair(a[0],a[1]);
        if(a[0]>=a[1])
        {
            luu=a[1];
            a.erase(a.begin()+1);
            a.push_back(luu);
        }
        else
        {
            luu=a[0];
            a.erase(a.begin());
            a.push_back(luu);
        }
    }
    long long  id;
    for(int i=1;i<=m;i++)
    {
        cin>>id;
        if(id<n)
        cout<<b[id].first<<" "<<b[id].second<<endl;
        else
        {
            id=(long long )((id-n)%(n-1)+1);
            cout<<a[0]<<" "<<a[id]<<endl;
        }
    }
}