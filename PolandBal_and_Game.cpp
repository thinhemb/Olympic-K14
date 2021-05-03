#include <iostream>
#include<string>
using namespace std;

int main()
{
    string a[1001],b[1001];
    int m,n;
    cin>>n>>m;
    for (int i = 0; i <n ; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i <n ; i++)
    {
        cin>>b[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i]==b[j])
            {
                count++;
                break;
            }
        }
    }
   if (count%2!=0)
    {
       m -= 1;
    } 
   
    if (n>m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
