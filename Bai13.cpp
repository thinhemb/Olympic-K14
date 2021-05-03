#include<bits/stdc++.h>
#include<math.h>
 using   namespace std;
 int main()
 {
     int a,b,c;
     cin>>a;cin>>b;cin>>c;
     if(a > 0 && b > 0 && c > 0 && a+b >c && b+c > a && a+c >b)
     {
         cout<<"THOA MAN";
     }
     else
     {
         cout<< " KHONG THOA MAN";
     }
     
 }
