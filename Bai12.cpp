

#include <iostream>
using namespace std;
int n,k,s;
int dem=0;
int a[100],b[100];
void Init()
{
    
    if(n==0&&k==0&&s==0)
        return;
    dem=0;
    for (int i = 1; i <= n; i++)
    {
        a[i]=i;
    }
    b[0]=0;
    backtracking(1);
    cout<<dem<<endl;
}
int main()
{
    do
    {
		cin>>n>>k>>s;
       Init();
    } while (n!=0&&k!=0&&s!=0);

    

    
}

