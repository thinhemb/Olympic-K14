#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int t;
   cin>>t;
   int x=0,y=0,j=0;
   while(t--){
     string s1,s2,s3;
     cin>>s1>>s2;
     getline(cin,s3);
     int time=((s1[1]-'0')*10+(s1[2]-'0'))*60+((s1[4]-'0')*10+(s1[5]-'0'));
     if(s2[0]=='p'&&(s1[1]!='1'||s1[2]!='2')) time+=12*60;
     if(s2[0]=='a'&&(s1[1]=='1'&&s1[2]=='2')) time-=12*60;
     //cout<<time<<endl;
     if(x==time) j++;
     else j=0;
     if(time<x||j==10) {
          y++;
     }
     if(j==10) j=0;
     x=time;
 
   }
   cout<<y+1;
    return 0;
}