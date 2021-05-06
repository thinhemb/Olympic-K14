#include <bits/stdc++.h>
using namespace std;

bool ktSCP( long long n)
{
    long long i = sqrt(n);
    if ( i * i == n )
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}

int main()
{
    int n;
    cin>>n;
    while ( n--)
    {
        long long x ;
        cin>>x;
        if ( ktSCP(x) )
        {
            long long i = sqrt(x);
            if ( ktSCP(i))
            {
                cout<<"CO\n";
            }
            else
            {
                cout<<"KHONG\n";
            }
            
        }
        else
            {
                cout<<"KHONG\n";
            }
    }
    

    return 0;
}
