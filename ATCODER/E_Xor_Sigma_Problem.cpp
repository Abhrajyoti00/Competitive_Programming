#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll xor_sum(int n, vector<ll>& a){
    vector<ll>psum(n);
    psum[0] = a[0];
    for(int i = 1; i<n; i++){
        psum[i] = psum[i-1] ^ a[i];
    }
    ll ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(i<1){
                ans += psum[j];
            }
            else{
                ans += psum[j] ^ psum[i-1];
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    cout << xor_sum(n, a) << endl;
    return 0;
}