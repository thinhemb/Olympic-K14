#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
    char str[101];
    fflush(stdin);
    cin.getline(str,101);
    int len=strlen(str);
    unsigned long long int temp=0;
    for (int i = 0; i < len; i++)
    {
        temp*=10;
        int x=(int)str[i]-48;
        temp+=x;
    }
    if (len>19)
    {
         cout<<"BigInteger";
    }
    else if (temp<128)
    {
        cout<<"byte";
    }
    else if(temp<32768)
    {
        cout<<"short";
    }
    else if(temp<=2147483647)
    {
        cout<<"int";
    }
    else if (temp<=9223372036854775807)
    {
        cout<<"long";
    }
    else
    {
        cout<<"BigInteger";
    }
}
