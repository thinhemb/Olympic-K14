#include <iostream>
#include<vector>
using namespace std;
vector <int> vt;
int main()
{
    int m,n;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        vt.push_back(i);
    }
    int k=1,dem=0;
    
        
            for (int i = 0; i < n; i++)
            {
                if (k==m)
                {
                    cout<<vt[i]<<endl;
                    vt.erase(vt.begin()+i);
                    dem++;
                    k=1;
                    n--;  
                }
                if (i==n-1)
                {
                    i=0;
                }
                k++;
                if (dem==vt.size())
                {
                    break;
                }

            }
            
        
    
      
    
    
    system("pause");
    return 0;
}
