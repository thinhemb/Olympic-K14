#include <bits/stdc++.h>
using namespace std;
void TDC(int xa1,int ya1,int za1,int xa2,int ya2,ỉn za2,int xb1,int yb1,int zb1,int xb2,int yb2,ỉn zb2)
{
    int maxx=max(xa1,xb1);
    int minx=min(xa2,xb2);
    int maxy=max(ya1,yb1);
    int miny=min(ya2,yb2);
    int maxz=max(za1,zb1);
    int minz=min(za2,zb2);
    int k=0;
    if(maxx>minx&&maxy>miny&&maxz>minz)
    {
        return k;
    }
    else
    {
        int k=(minx-maxx)*(miny-maxy)*(minz-maxz);
        return k;
    }
}
int main()
{
    int xa1,ya1,za1,xa2,ya2,za2;
    int xb1,yb1,zb1,xb2,yb2,zb2;
    int xc1,yc1,zc1,xc2,yc2,zc2;
    cin>>xa1>>ya1>>za1>>xa2>>ya2>>za2;
    cin>>xb1>>yb1>>zb1>>xb2>>yb2>>zb2;
    cin>>xc1>>yc1>>zc1>>xc2>>yc2>>zc2;
    int C1=TDC(xa1,ya1,za1,xa2,ya2,za2,xb1,yb1,zb1,xb2,yb2,zb2);
    int C2=TDC(xa1,ya1,za1,xa2,ya2,za2,xc1,yc1,zc1,xc2,yc2,zc2);
    int C3=TDC(xb1,yb1,zb1,xb2,yb2,zb2;,xc1,yc1,zc1,xc2,yc2,zc2);
    cout<<C1+C2+C3<<endl;
    system("pause");
    return 0;
}
