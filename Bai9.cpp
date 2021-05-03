#include<bits/stdc++.h>
#include<math.h>
 using   namespace std;
 int main()
 {
   int n,i=1;
   cin>>n;
   int s;
   do
   {
       s=pow(2,i);
       i++;
   } while (s<n);
   cout<<s;
 }
