#include <iostream>
#include <math.h>
using namespace std;
const long long MAX=1e5+7;
int songuyento(int n)
{
    if (n<2)
    {
        return 0;
    }
    for (int i = 2; i <=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if( n % 2 == 1)
        {
            cout<<pow(2,n-1)<<"\n";
        }
        else
        {   long long dem=0;
            while(n%2==0)
            {   
                dem++;
                n/=2;
            }
            long long a[MAX];
            long long count=0;
            long long  k=3;
            while(dem==count)
            {
                if(songuyento(k))
                {   
                    a[count]=k;
                    count++;
                }
                k+=2;
            }
            long long s=pow(2,n);
            for (int i = 0; i < count; i++)
            {
                s*=a[i];
            }
            cout<<s<<"\n";
        }
    }
}