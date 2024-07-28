#include<bits/stdc++.h>
using namespace std;
#define ll long long

void  solve(){
    ll n, x;
    cin>>n>>x;
    ll count = 0;
    ll last = 1e3;
    for(ll a = 1; a<last; a++){
        for(ll b = 1; b<last; b++){
            ll c = (n-(a*b))/(a+b);
            for(ll r = 1; r<=c; r++){
                if((a*b + a*c + b*c <=n) && ((a+b+c)<=x)){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}