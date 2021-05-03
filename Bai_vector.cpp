#include <iostream>
#include<vector>
using namespace std;
vector <int> vt;
int main()
{
    int n,t;
    cin>>n>>t;
    for (int i = 1; i <= n; i++)
    {
        vt.push_back(i);
    }
    while (t--)
    {
        vt.push_back(vt.front());
        vt.erase(vt.begin());
    }
    for (int i = 0; i <n; i++)
    {
        cout<<vt[i]<<" ";
    }
    system("pause");
    return 0;
}
