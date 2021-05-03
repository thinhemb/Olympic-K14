#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    while (t--)
    {
        cin>>n;
        int s1=0,s2=0;
        
        if (n/2%2==0)
        {
            cout<<"YES"<<endl;
            int i=2,k=1;
            while (k++<=n/2)
            {
                cout<<i<<" ";
                s1+=i;
                i+=2;
            }
            int g=1,h=1;
             while (h++<=n/2-1)
            {
                cout<<g<<" ";
                s2+=g;
                g+=2;
            }
            cout<<s1-s2<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
        
    }
    
    
   
}
