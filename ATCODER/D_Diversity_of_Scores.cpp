#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, t;
    cin>>n>>t;
    vector<ll>p(n,0);
    vector<ll>a(t,0);
    vector<ll>b(t,0);
    map<ll,ll>mp;
    for(ll i = 0; i<n; i++)
        mp[p[i]]++;
    for(ll i = 0; i<t; i++){
        cin>>a[i]>>b[i];
    }
    set<ll>st;
    st.insert(0);
    LLONG_MIN
    for(ll i = 0; i<t; i++){
        ll vtr = p[a[i]-1]+b[i];
        mp[p[a[i]-1]]--;
        if(mp[p[a[i]-1]] == 0){
            mp.erase(p[a[i]-1]);
        }
        // cout<<" \n vtr = "<<vtr<<endl;
        p[a[i]-1] = vtr;
        mp[vtr]++;
        cout<<mp.size()<<endl;

    }
    
}