#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long n;
    while (t--)
    {
        cin>>n;
        long long s=1;
        for (int i = 2; i<n; i++)
        {
              s+=pow(2,i-1);
            if (n%s==0)
            {
                
                break;
            }
        }
        cout<<n/s<<"\n";
    }
    
}
