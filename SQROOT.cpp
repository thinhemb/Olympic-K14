#include <iostream>
#include<math.h>
#include<vector>
using namespace std;
vector <int> scp;
int PTSnt(int a)
{
    int count=0;
    for (int i = 2; i <=a ; i++)
    {
        while (a%i==0)
        {
            count++;
            a/=i;
            if(a%i!=0)
            {
                return count;
            }
  
        }
    }
}
int main()
{
    int t;
    cin>>t;
    scp.push_back(1);
    for(int i=0;i<t;i++)
    {
        int count=0;
        int b;
        cin>>b;
        int s=scp.size();
        for (int j = 0; j <s; j++)
        {
            cout<<scp.at(j)<<" ";
            scp.push_back(scp.at(j)*b);
        }
        for (int i = 0; i < 2*s; i++)
        {
            if(scp.at(i)%(b*b)==0)
            {
                 count=1; 
                 break;  
            }
            else if(PTSnt(b)%2==0)
            {
                 count=1; 
                 break; 
            }
            
        }
        if(count==1)
        {
            cout<<"YES"<<endl;
        }else cout<<"No"<<endl;
    }
    return 0;
}
