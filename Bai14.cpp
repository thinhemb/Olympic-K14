#include<bits/stdc++.h>
#include<math.h>
 using   namespace std;
 int main()
 {
     int a,b;
     cin>> a;cin>>b;
     for (int i = 1; i < a+1; i++)
     {
         if (b % i ==0 && a % i ==0 )
         {
             cout<<"\n"<<i;
         }
         
     }
     

 }