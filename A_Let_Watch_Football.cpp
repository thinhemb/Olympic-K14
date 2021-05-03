#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int left=0,right=c*a;
    while(left<=right)
    {
        int mid=(left + right)/2;
        if(mid*b+b*c>c*a)right=mid-1;
        else if(mid*b+b*c==c*a)
        {
            cout<<mid;
            return 0;
        }
        else left =mid +1;
    }
    cout<<left<<endl;
    
    
    
    return 0;
}
