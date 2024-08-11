#include<bits/stdc++.h>
using namespace std;
#define ll long long

void  solve(){
    ll n;
    cin>>n;
    
    vector<ll>b(n-1);
    for(ll i = 0 ; i<n-1; i++){
        cin>>b[i];
    }
    if(n == 2){
        cout<<b[0]<<" "<<b[0]<<endl;
        return;
    }
    vector<ll>a(n, 0);
    vector<ll>c(n-1);

    for(ll i = 1 ; i<n-1; i++){
        a[i] = (b[i-1] | b[i]);
    }
    a[0] = b[0] & a[1];
    a[n-1] = b[n-2] & a[n-2];
    for(ll i = 0 ; i<n-1; i++){
        c[i] = a[i] & a[i+1];
    }
    for(ll i = 0; i<n-1; i++){
        if(c[i]!=b[i]){
            cout<<-1<<endl;
            return;
        }
    }
    for(ll i = 0; i<n; i++)
        cout<<a[i]<<" ";
    
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}