

#include <iostream>
using namespace std;
int main()
{
    long long dola;
 
    cin >> dola;
    cout << dola / 100 + dola % 100 / 20 + dola % 20 / 10 + dola % 10 / 5 + dola % 5;
}

