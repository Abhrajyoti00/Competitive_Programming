#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans1=0, ans2 = 0, ev = 0, odd = 0, mod = 1;
    for(ll i=0;i<n;i++){
        if(v[i]%2 == 0){
            ev++;
        }
        else{
            odd++;
            mod = max(mod, v[i]);
        }
            
    }
    if(ev == 0 || odd == 0){
        cout<<0<<endl;
        return;
    }
    for(ll i = 0; i<n; i++){
        if(v[i]%2==0){
            if(mod>v[i]){
                ans1+=1;
                mod = mod + v[i];
            }
            else{
                ans1+=2;
                mod = mod + v[i];
                mod = mod + v[i];
            }
        }
    }
    mod = 1;
    for(ll i = n-1; i>=0; i--){
        if(v[i]%2==0){
            if(mod>v[i]){
                ans2+=1;
                mod = mod + v[i];
            }
            else{
                ans2+=2;
                mod = mod + v[i];
                mod = mod + v[i];
            }
        }
    }
    // cout<<ans1<<" "<<ans2<<endl;
    cout<<min(ans1, ans2)<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
}
