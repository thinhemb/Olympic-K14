#include <iostream>
#include<stack>
using namespace std;
stack <long long> st,s;
void Them(stack <long long> st, int Chon1)
{
    while (Chon1--)
    {
        long long x;
        cin>>x;
        st.push(x);
        s.push(x);
    }
    while (st.empty()!=true)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
void XoaDinh(stack <long long> s)
{
    while(s.empty()!=true)
    {
        s.pop();
        cout<<s.top()<<" ";
    }
}
int main()
{
    
    int Chon1;
    cin>>Chon1;
    Them(st,Chon1);
    cout<<endl;
    XoaDinh(s);
    cout<<endl;
     long long m=0;
    while (st.empty()!=true)
    {
        
        if (m<st.top())
        {
            m=st.top();
        }
        st.pop();
    }
    cout<<m<<endl;
    system("pause");
    return 0;
}
