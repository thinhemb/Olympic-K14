#include <bits/stdc++.h>
using namespace std;
int dir[8][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, 1}, {-1, -1}, {1, -1}, {1, 1}};
char op[8][3] = {"L", "R", "U", "D", "LD", "LU", "RU", "RD"};
int main()
{
    char a[3], b[3];
    cin >> a >> b;
    int x1 = a[0] - 'a';
    int y1 = 8 - a[1] + '0';
    int x2 = b[0] - 'a';
    int y2 = 8 - b[1] + '0';
    int dis = max(abs(x1 - x2), abs(y1 - y2));
    cout<<dis<<"\n";
    while(x1 != x2 || y1 != y2)
    {
        for(int i = 0;i < 8;i ++)
        {
            int dx = x1 + dir[i][0];
            int dy = y1 + dir[i][1];
            if(dx >= 0 && dx < 8 && dy >= 0 && dy < 8 && max(abs(dx - x2), abs(dy - y2)) == dis - 1)
            {
                dis --;
                x1 = dx;
                y1 = dy;
                cout<< op[i]<<"\n";
                break;
            }
        }
    }
    
    
    return 0;
}
