#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    //      
    //              []
    //      []      []
    //      []  [][][]  
    //      [][][][][]
    int n;
    long long k;
    cin>>n>>k;
    //n là so thap
    //k la chi phí cắt tháp
    int *a;
    a= new int[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ans=0;
    int dem=0;
    for (int i = 1; i <=n; i++)
    {
       dem++;
       ans=(upper_bound(a,a+n,a[i])-a);
       if()
    }
    

    
    
    return 0;
}
