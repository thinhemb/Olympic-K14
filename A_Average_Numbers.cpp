#include <iostream>
#include<vector>
using namespace std;
const int Maxn=2e5+10;
int main()
{
    vector<int> v;
    long sum=0;
    int n;
    cin>>n;
    int a[Maxn];
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for (int i = 1; i <=n ; i++)
    {
       if(a[i]*n==sum)
        v.push_back(i);
    }
    cout<<v.size()<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}
