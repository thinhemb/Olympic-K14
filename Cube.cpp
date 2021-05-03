#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    int x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    int maxx=max(x1,x3);
    int minx=min(x2,x4);
    int maxy=max(y1,y3);
    int miny=min(y2,y4);
    if(maxx>minx&&maxy>miny)
    {
        cout<<0<<endl;
    }
    else
    {
        int k=(minx-maxx)*(miny-maxy);
        cout<<k<<endl;
    }
    
    system("pause");
    return 0;
}
