#include<iostream>
#include<string>
using namespace std;
 
const int maxn = 1e7 + 3;

int main()
{
    int k, gan[maxn], count=0;
    string s;
    long long int dem=0;
    cin >> k>>s;
    gan[0]=1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '1') count++;
        if(count >= k) dem += gan[count-k];
        gan[count]++;
    }
    cout << dem;
 
 
}