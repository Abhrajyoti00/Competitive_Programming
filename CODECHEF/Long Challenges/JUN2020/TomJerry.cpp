#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        ll p;
        p = __builtin_ffsll(x);
        ll two;
        two = ((ll)(pow(2,p)));
        cout<<(x/two)<<endl;
    }
    return 0;    
}
