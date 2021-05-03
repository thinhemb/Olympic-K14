#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    string str1;
    cin >> str1;
 
    ll nb, ns, nc, pb, ps, pc, r;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
 
    ll left = 1, right = 1e14;
 
    ll countB = 0, countC = 0, countS = 0;
 
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i] == 'B') countB++;
        else if (str1[i] == 'C') countC++;
        else countS++;
    }

    while (left <= right)
    {
        ll middle = (left + right) / 2;
 
        ll value1 = max((ll)0, countB * middle - nb);
        ll value2 = max((ll)0, countC * middle - nc);
        ll value3 = max((ll)0, countS * middle - ns);
 
        ll answer = value1 * pb + value2 * pc + value3 * ps;
        
        if(answer > r)
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    
    cout << right;
    return 0;
}