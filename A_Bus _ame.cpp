#include <iostream>
using namespace std;

int main()
{
    long long x,y,count=0;
    cin>>x>>y;
    while (x>=0&&y>=0)
    {
        if(count==1)
        {
            if(x>=2&&y>=2)
            {
                x-=2;
                y-=2;
                count=1;
            }
            else if(x==1&&y>=12)
            {
                x-=1;
                y-=12;
                count=1;
            } 
            else if(y>=22)
            {
                y-=22;
            }
            else break;
            
        }
        else
        {
            if(y>=22)
             {
                y-=12;
                count=0;
            }
            else if( y>=12&&x>=1)
            {
                y=-12;
                x>-1;
                count=0;
            }
            else if(x>=2&&y>=2)
            {
                x-=2;
                y-=2;
                count=0;
            }
            else if(x>=2&&y>=2)
            {
                x-=2;
                y-=2;
                count=0;
            }
            else break;
        
        }
    }
    if(count==0)cout<<"Hanako";
    else
    {
        cout<<"Ciel";
    }
    
    
    return 0;
}
