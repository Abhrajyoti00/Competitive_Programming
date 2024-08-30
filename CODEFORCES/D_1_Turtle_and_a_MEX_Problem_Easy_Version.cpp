#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll findMex(vector<ll>& vec) {
    unordered_set<ll> elements(vec.begin(), vec.end());
    
    ll mex = 0;
    while (elements.find(mex) != elements.end()) {
        mex++;
    }
    // cout<<mex<<endl;
    return mex;
}


void solve(){
    ll n, m;
    cin>>n>>m;
    vector<vector<ll>>v(n);
    for(ll i =0; i<n; i++){
        ll l;
        cin>>l;
        for(int j =0; j<l; j++)
         {
            ll ele;
            cin>>ele;
            v[i].push_back(ele);
         }   
    }
    vector<ll>mex(n);
    ll max_mex = 0;
    for(ll i = 0; i<n; i++){
        ll p = findMex(v[i]);
     
        v[i].push_back(p);
    }

    ll sum = 0;
    for(ll i = 0; i<m; i++){
        ll m = findMex(v[i]);
        if(i<=m){
            sum+=m;
        }
        else{
            sum+=i;
        }
    }
    cout<<sum<<endl;
   
     
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
}
