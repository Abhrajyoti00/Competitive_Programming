#include<bits/stdc++.h>
using namespace std;
#define ll long long

void  solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>nv;
    for(ll i = 0; i<n; i++)
        cin>>a[i];
    for(ll i = 0; i<n; i++){
        if(i%2==0){
            nv.push_back(a[i]);
        }
    }
    sort(nv.begin(),nv.end());
    cout<<nv[nv.size()-1]<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}