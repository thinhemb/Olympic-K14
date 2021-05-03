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
        long long s=0;
        for (int i = 1; i<n; i++)
        {
             s+=pow(2,i-1);
            if (n%s==0&&s!=1)
            {
                cout<<n/s<<"\n";
                break;
            }
           
            
            
        }
        
    }
    system("pause");
    return 0;
}
