#include <bits/stdc++.h>
using namespace std;
const int maxn =1e5+7;
int a[maxn]={0},Max=0;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int b[maxn];
    for (int i = 0; i <n; i++)
    {
        cin>> b[i];
        Max=max(Max,b[i]);
        a[b[i]]++;
    }
    for (int i = 0; i <n; i++)
    {
        if(a[b[i]]%2==1)
        {
            cout<<"Conan\n";
            return 0;
        }
    }
   cout<<"Agasa\n";
    return 0;
}
