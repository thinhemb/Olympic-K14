#include <iostream>
#include <math.h>
using namespace std;
bool KTSNT(int n)
{
    if(n<2) return 0;
    for (int i = 2; i <=sqrt(n); i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int a,b,k,count=0,x=-1;
    cin>>a>>b>>k;
    int r=1,l=b-a+1;
    while (r<l)
    { 
        int mid=(r+l)/2;
            for (int i = r; i <=b-mid+1; i++)
            {
                if (KTSNT(i)==1)count++;
            }
        if(k<count)
        {
            x=l;
            l=mid-1;
        }
        else if(k==count) 
        {
            cout<<mid+1;
            return 0;
        }    
		else r=mid+1;   
    }
    if(x==-1)cout<<-1;
    else
    cout<<x+1;
    

    return 0;
}
