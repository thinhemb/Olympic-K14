#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
 
int line_max(std::vector<std::string> a) 
{
	//функция поиска самой длинной строки в тексте
	int n = a.size(), q;
	if (n == 0) return 0;
	int max_length = a[0].length();
	for (int i = 1; i < n; i++) 
	{
		q = a[i].length();
		max_length = std::max(q, max_length);
	}
	return max_length;
}
 
int main() 
{
	std::vector<std::string> line;
	std::string s;
 
	while (getline(std::cin, s)) 
	{
		line.push_back(s);
	}
 
	int max_length = line_max(line);
	int n = line.size();
	bool flag = true;
 
	for (int i = 0; i <= max_length + 1; i++) 
	{
		std::cout << "*";
	}
	std::cout << std::endl;
 
	int leng = 0, c = 0;
 
	for (int i = 0; i < n; i++) 
	{
		std::cout << "*";
 
		leng = line[i].length();
		c = 0;
 
		if (( max_length - leng ) % 2 == 1 && leng > 0) 
			 
		{
			if (flag) 
			{
				c = 0;
				flag = false;
				
			}
			else
			{
				c = 1;
				flag = true;
			}
		}
 
		for (int j = 0; j < (max_length - leng + c) / 2; j++) 
		{
			std::cout << " ";
		}
 
		std::cout << line[i];
		
		for (int j = (max_length + leng + c) / 2; j < max_length; j++) 
		{
			std::cout << " ";
		}
 
		std::cout << "*" << std::endl;
	}
 
	for (int i = 0; i <= max_length + 1; i++) 
	{
		std::cout << "*";
	}
 
	return 0;
}