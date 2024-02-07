#include <bits/stdc++.h>
using namespace std;

unsigned int nextPowerOf2(unsigned int n) 
{ 
    unsigned int p = 1; 
    if (n && !(n & (n - 1))) 
        return n; 
 
    while (p < n) 
        p <<= 1; 
     
    return p; 
} 

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        long long a = pow(2, (int)log2(x)); 
        long long b = x ^ a;
        long long next_pow = nextPowerOf2(b);
        cout<<"a" << a<< " b"<<b<<" Getting "<<next_pow<<endl;
        cout<<next_pow - b<<endl;

    }
    return 0;
}
