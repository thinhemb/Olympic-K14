#include <bits/stdc++.h>
 
using namespace std;
 
string rel(string s)
 {
    for (int i=0;i<s.size();i++) 
    {
        
        s[i] = tolower(s[i]);
        if (s[i] == '0') s[i] = 'o';
        if (s[i] == '1' || s[i] == 'i') s[i] = 'l';
    }
    return s;
}
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0);
 
    string s;
    cin >> s;
    s = rel(s);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        string x; cin >> x;
        x = rel(x);
        if (s == x)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
 
}