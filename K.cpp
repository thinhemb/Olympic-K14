#include <bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
int main()
{
    int n;
    cin>>n;
    int a[maxn];
    long long sump=0,sumn=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        
    }
    int cnt=0;
    for (int i =n-1; i >=0; i--)
    {
       if(a[i]<0)
       {
           cnt=i;
           break;
       }
    }
    for (int i = 0; i <=cnt; i++)
    {
        if(a[i]>0)
        {
            sump+=a[i];
        }
        else if(a[i]<0)
         sumn+=a[i];
    }
    if(sumn==0)cout<<0;
    else 
    cout<<abs(sumn+sump);
    
    
   
    return 0;
}