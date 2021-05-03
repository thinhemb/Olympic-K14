#include<bits/stdc++.h>
 using   namespace std;
 int main()
 {
     int n;
     
     cin>>n;
     if(n>=1)
     {
         cout<<"2";
     }
     for (int i = 3; i < 2*n+1; i+=2)
     {
         int count=0;
         for (int j = 2 ; j < i/2 ; j++)
         {
             if (i%j==0)
             {
                 count++;
             }
         }
         if(count == 0)
         {
             cout<<"\n"<<i;
         }
         
     }
          

 }
