

#include <iostream>
#include<string>
using namespace std;
int main()
{
    int t;cin >> t;
	int* arr;
	arr = new int[t];
	string str;
	int s = 0;
	for (int i = 0; i < t; i++)
	{
		cin >> str;
		if (str=="Tetrahedron")
		{
			s += 4;
		}
		else if (str== "Cube")
		{
			s += 6;
		}
		else if(str== "Octahedron")
		{
			s += 8;
		}
		else if (str== "Dodecahedron")
		{
			s += 12;
		}
		else if (str== "Icosahedron")
		{
			s += 20;
		}
	}
	cout<< s;
	
}
