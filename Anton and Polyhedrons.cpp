#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s[n];
	int tong= 0;
	for( int i=0; i<n; i++)
	{
		cin>>s[i];
		if( s[i] == "Icosahedron" )
		{
		   tong+= 20;
	    }
	    else if( s[i] == "Dodecahedron")
	    {
	    	tong+= 12;
		}
		 else if( s[i] =="Cube")
		{
			tong+= 6;
		}
		else if(s[i]=="Octahedron")
		{
			tong+= 8;
		}
		else tong+=4;
		
	}
	cout<<tong<<endl;
}
