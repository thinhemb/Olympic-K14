#include <iostream>

using namespace std;

int main()
{
    
    long long n,k,count=0;;
    cin>>n>>k;
    long long s=1;
    if (n==1) {
        cout << "0";
        return 0;
    }
    if (k>=n) {
        cout << "1";
        return 0;
    }
   while ( k > 1 && s < n)
   {
      s+=--k;
      count++;
   }
   if (s<n)
   {
       cout<<-1;
   }
   else
   {
       cout<<count;
   }
   
   
   
    
    
   
    return 0;
}
