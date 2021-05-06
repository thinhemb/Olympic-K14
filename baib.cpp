#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	startswich:
	while(t)
	{
		
		t--;
		int n;
		cin>>n;
		

		if(n<10)cout<<n<<endl;
		else if(n/10==1)
		{
			for (int i = 1; i < 10; i++)
			{
				for (int j = 1; j < 10; j++)
				{
					if(i+j==n&&i!=j)
					{cout<<i<<j<<endl;
					goto startswich;}
				}
				
			}
			
		}
		else if (n/10==2)
		{
			for (int i = 1; i < 10; i++)
			{
				for (int j = 1; j < 10; j++)
				{
					for (int k = 1; k < 10; k++)
					{
						if(i+j+k==n&&i!=j&&i!=k&&k!=j)
						{cout<<i<<j<<k<<endl;
						goto startswich;}
					}
					
					
				}
				
			}
		}
		else if (n/10==3)
		{
			for (int i = 1; i < 10; i++)
			{
				for (int j = 1; j < 10; j++)
				{
					for (int k = 1; k < 10; k++)
					{
						for (int e = 1; e < 10; e++)
						{
							if(i+j+k==n&&i!=j&&i!=k&&k!=j&&e!=i&&e!=k&&e!=j){cout<<i<<j<<k<<e<<endl;
							goto startswich;}
						}
						
						
					}
					
					
				}
				
			}
		}
		else if (n/10==4)
		{
			for (int i = 1; i < 10; i++)
			{
				for (int j = 1; j < 10; j++)
				{
					for (int k = 1; k < 10; k++)
					{
						for (int e = 1; e < 10; e++)
						{
							for (int f = 1; i < 10; i++)
							{
								if(i+j+k==n&&i!=j&&i!=k&&k!=j&&e!=i&&e!=k&&e!=j&&f!=i&&f!=k&&f!=j&&f!=e)
								{cout<<i<<j<<k<<e<<f<<endl;
							goto startswich;}
							}
							
							
						}
						
						
					}
					
					
				}
				
			}
		}
		else 
		{
			cout<<-1<<endl;
		}
		
	}

    return 0;
}
