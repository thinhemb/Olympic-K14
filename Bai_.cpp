#include <iostream>
#include<vector>
#include<queue>
using namespace std;
// vector <int> vt;
// vector <int> :: iterator a ;
queue <int> q;
stack <int> v;
// int main()
// {
//     vt.push_back(2);
//     vt.push_back(3);
//     for (int i = 0; i < vt.size() ; i++)      */ xuat ra vector/*
//     {
//         cout<<vt[i]<<" ";
//     }
//     cout<<endl;
//     for (a=vt.begin();a!=vt.end();a++)  */ xuat ra vector/*
//     {
//         cout<<*a<<" ";
//     }
//     system("pause");
//     return 0;
// }
int main()
{
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.front()<<endl;
    q.pop();
   while (!q.empty()) q.pop();   
//    xoa queue
   
   
}