#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    if(k>36)cout<<-1;
    else    
    {
        for (int i = 1; i <=k/2; i++)
        {
            cout<<8;
        }
        if(k%2==1)cout<<4;
        
    }

    
    
    return 0;
}
