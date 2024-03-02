#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Credit:GFG

long long highestPowerof2(long long N)
{
    // if N is a power of two simply return it
    if (!(N & (N - 1)))
        return N;
    // else set only the most significant bit
    return 0x8000000000000000 >> (__builtin_clzll(N));
}
 
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<highestPowerof2(n)<<endl;
    }
    
}