#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, c;
    cin>>n>>c;

    vector<ll>a(n);
    vector<ll>ans(n,0);
    for(ll i =0; i<n; i++){
        ll ele;
        cin>>ele;
        a[i] = ele;
    }
        
    ll mx_0_i = 0, mx_i_n;
    ll pre_max[n], suf_max[n];
    pre_max[0] = a[0] + c;
    suf_max[n-1] = a[n-1];
    vector<ll>pre_sum(n,0);
    pre_sum[0] = a[0]+c;
    for(ll i = 1; i<n; i++){
        pre_max[i] = max(pre_max[i-1], a[i]);
        pre_sum[i] = pre_sum[i-1] + a[i];
    }
    for(ll i = n-2; i>=0; i--){
        suf_max[i] = max(suf_max[i+1], a[i]);
    }

    for(ll i = 0; i<n; i++){
        if(i == 0){
            if(pre_sum[i]>=suf_max[i]){
                ans[i] = 0;
            }
            else
                ans[i] = 1;
        }
        else if(i == n-1){
            if(a[i] > pre_max[i-1]){
                ans[i] = 0;
            }
            else if(pre_sum[i]>=a[i]){
                ans[i] = i;
            }
            else
                ans[i] = i+1;
        }
        else{
            if(a[i] > pre_max[i-1] && a[i]>= suf_max[i+1]){
                ans[i] = 0;
            }
            else if(pre_sum[i]>=suf_max[i+1]){
                ans[i] = i;
            }
            else
                ans[i] = i+1;
        }
        
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
          solve();
          cout<<endl;
    }
    return 0;
}