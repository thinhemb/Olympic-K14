#include<bits/stdc++.h>
 using   namespace std;
 int main()
 {
     int n,s;
     cin>> n;
     
     for (int i = 2; i <= n; i+=2)
     {
         s+=i;
     }
     cout<<s;
 }
