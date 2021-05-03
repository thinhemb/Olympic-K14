#include <iostream>
using namespace std;
bool KTSNT(int t)
{
    if (t==2)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i < t; i++)
        {
            if (t%i==0)
            {
                return 0;
            }
        
        }
    }
    return 1;
}
int main()
{
    int n,k,a[1000],count=0,dem=0;
    cin>>n>>k;
    for (int i = 2; i <=n; i++)
    {
        if (KTSNT(i)==1)
        {
            a[count++]=i;
            
        }
    }
    for (int i = count-1; i >-1; i--)
    {
        //cout<<a[i]<<endl;
        if (a[i]>11)
        {
            for (int j =count-2 ; j>-1; j--)
            {
                if (a[i]==a[j]+a[j-1]+1)
                {
                    //cout<<a[i]<<endl;
                    dem++;
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
    if (dem<k)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    
    
    
    
}
