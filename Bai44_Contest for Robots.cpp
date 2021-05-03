

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[2][100];
    int count = 0,count1=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[0][i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[1][i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[0][i] == 1 && arr[1][i]==0)
        {
            count++;
        }
        else if(arr[0][i] == 0 && arr[1][i]==1) 
            count1++;
    }
    if (count == 0)
    {
        cout << "-1";
    }
    else(cout << count1/count+1);
    
}

