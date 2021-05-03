#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n,l,r;
        cin>>n>>l>>r; 
        int a[50+2];
        if(n==2)
        {
           
            a[0]=l;a[1]=r;
            for (int i = 0; i <n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
        else 
        {
            
            
            int d=0;
            for (int i =n-1; i >0 ; i--)
            {
                if((r-l)%(i-1)==0)
                {
                    d=(r-l)/(i-1);
                    break;
                }
            }
            if(l-d>0)a[0]=l-d;
            for (int i = 1; i < n; i++)
            {
                a[i]=a[i-1]+d;
            }
            for (int i = 0; i <n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
        
    }
    return 0;
}
