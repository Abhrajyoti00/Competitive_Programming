#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll func(ll N, ll k){
    if (N == 0) return 0;
    if(N==1)    return 1;
    double val = 1.0/k;
    double d = pow(N, val);
    ll m = floor(d);
    ll  x = (ll)pow(m, k);
    ll left = N - x;
    return 1+func(left, k);
}
int main(){
    int N,  k;
    cin>>N>>k;
    double val = 1.0/k;
    double d = pow(N, val);
    int m = floor(d); //m = 3
    cout<<m;
    ll ans = LLONG_MAX;
    while(m>0){
        ll  x = (ll)pow(m, k);
        ll left = N - x;
        ans = min(ans, func(left, k));
        cout<<ans<<endl;
        m--;
    }
    cout<<ans<<endl;

}