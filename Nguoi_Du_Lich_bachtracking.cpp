#include <iostream>
#include<algorithm>
using namespace std;
int C[200][200],Check[200],X[200];
int n,pr=0,opr=10000;
void Backtracking(int k)
{
    for (int i = 2; i <=n; i++)
    {
        if(Check[i]==0 && pr+C[X[k]][i] < opr)
        {
            X[k]=i;
            Check[i]=1;
            pr+=C[X[k-1]][i];
            if (k==n)
            {
                opr=min(opr,pr);
                
            }else
            {
                Backtracking(k+1);
            }
            Check[i]=0;
            pr-=C[X[k-1]][i];
            X[k]=0; 
        }
    }
}
int main()
{
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>C[i][j];
        }
    }
    X[1]=1;
    Backtracking(2);
    cout<<opr<<endl;
    return 0;
}
