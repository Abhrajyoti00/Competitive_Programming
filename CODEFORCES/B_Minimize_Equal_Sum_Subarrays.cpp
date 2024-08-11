#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll>v1(n, -1);
    vector<ll>v2(n, -1);
    for(ll i =0; i<n; i++)
        cin>>v1[i];
    ll fd = v1[0];
    for(ll i = 0; i<n-1; i++){
        v2[i] = v1[i+1];
    }
    v2[n-1] = fd;
    for(ll i = 0; i<n; i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    return;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        {
        solve();}
}
