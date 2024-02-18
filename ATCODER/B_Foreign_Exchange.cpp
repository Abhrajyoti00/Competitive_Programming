#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<ll>v;
    vector<ll>s;
    vector<ll>t;

    for(ll i = 0; i<n; i++){
        ll ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(ll i = 0; i<n-1; i++){
        ll e,f;
        cin>>e>>f;
        s.push_back(e);
        t.push_back(f);
    }

    for(ll i = 0; i<n-1; i++){
        v[i+1] += (v[i]/s[i])*t[i];
    }
    cout<<v[n-1];
}