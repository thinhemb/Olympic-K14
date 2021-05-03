#include <iostream>
using namespace std;
int base=31;
const long long MOD=1e9+3;
const long long maxn=1e6+111;
long long hashT[maxn],POW[maxn];
long long getHashT(int i,int j)
{
    return(hashT[j]-hashT[i-1]*POW[j-i+1]+MOD*MOD)%MOD;
}
int main()
{
    string T,P;
    cin>>T>>P;
    int nt=T.size();
    int np=P.size();
    T=' '+T;
    P=' ' + P;
    POW[0]=1;
    for (int i = 1; i <= nt; i++)
    {
        POW[i]=(POW[i-1]*base )%MOD;
    }
    for (int i = 1; i <= nt; i++)
    {
       hashT[i]=(hashT[i-1] * base - T[i] - 'a' + 1)%MOD;
    }
    long long hashP=0;
    for (int i = 1; i <=np; i++)
    {
        hashP=(hashP *base + P[i]-'a'+1)%MOD;
    }
    for (int i = 1; i <=nt-np+1; i++)
    {
        if(hashP==getHashT(i,i+np-1))
        cout<<i<<" ";
    }
    
    
    
    
    return 0;
}
