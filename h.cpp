#include <bits/stdc++.h>
using namespace std;
int n;
int kt(int a[][201],int ktq[][101],int e,int f)
{
    for (int i = e; i < n; i++)
    {
        for (int j = f; j < n; j++)
        {
            for (int k = 0; k < n/2; k++)
            {
                 for (int l = 0; l < n/2; l++)
                {
                    if(a[i][j]!=ktq[k][l])
                    4
0 0 0 1
1 1 0 0
1 0 0 1
0 1 0 1
                }
            }
            
        }
        
    }
    return 1;
}
int main()
{
    
    cin>>n;
    if(n%2==1)
    {
        cout<<"NO";
        return 0;
    }
    int a[201][201],kt1[101][101],kt2[101][101],kt3[101][101],kt4[101][101];
    int q=n/2;
    for (int i = 0; i <q; i++)
    {
       for (int j = 0; j <q; j++)
       {
           if(i==0)kt1[0][j]=1;
           else if(j==0)kt1[i][0]=1;
           else kt1[i][j]=0;

           if(i==q-1)kt1[0][j]=1;
           else if(j==0)kt1[i][0]=1;
           else kt2[i][j]=0;

           if(i==0)kt1[0][j]=1;
           else if(j==q-1)kt1[i][0]=1;
           else kt3[i][j]=0;

           if(i==q-1)kt1[0][j]=1;
           else if(j==q-1)kt1[i][0]=1;
           else kt4[i][j]=0;
       }
       
    }

    for (int i = 0; i <n; i++)
    {
       for (int j = 0; j <n; j++)
       {
           cin>>a[i][j];
       }
       
    }
    for (int i = 0; i <n; i++)
    {
       for (int j = 0; j <n; j++)
       {
           if(kt(a,kt1,i,j)==1)
           {
               cout<<"YES";
               return 0;
           }
            if(kt(a,kt2,i,j)==1)
           {
               cout<<"YES";
               return 0;
           }
          if(kt(a,kt3,i,j)==1)
           {
               cout<<"YES";
               return 0;
           }
            if(kt(a,kt4,i,j)==1)
           {
               cout<<"YES";
               return 0;
           }
       }

       
    }
    cout<<"NO";
    return 0;
}
