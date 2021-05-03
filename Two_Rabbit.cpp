#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long x,y,a,b;
        cin>>x>>y>>a>>b;
         y=y-x;
        long long f=a+b;
         if(y%f==0)
         {
             cout<<y/f<<endl;
         }
         else
         {
             cout<<-1<<endl;
         }
         
    }
    return 0;
}
