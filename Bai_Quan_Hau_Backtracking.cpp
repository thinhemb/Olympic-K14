#include <iostream>
#include<math.h>
using namespace std;
const int maxn = 100+5;
int n,a[maxn];
bool check(int x1,int y1)
{
    for(int i=1; i<x1 ; i++)
        if(a[i] == y1 || abs(i-x1) == abs(a[i] - y1) )
            return false;
    return true;
}
void backtracking(int k)
{
    for(int i=1 ; i<=n ; i++)
        if(check(k,i))
        {
            a[k] = i;
            if(k == n)
            {
                for (int j=0 ; j<n ; j++)
                {
                    a[j]=j;
                    cout<< a[j] << " ";
                }

                cout<< endl;
            }
            backtracking(k+1);
        }
}
int main()
{
    cin>>n;
    if (n>3)
    {
        backtracking(1);
    }
    else
    {
        cout<<-1<<endl;
    }

    return 0;
}
