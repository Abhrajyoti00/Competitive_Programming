#include <bits/stdc++.h>
using namespace std;
#define int long long

void fun(vector<int>&v, int i, int prev, int dist, int len, int k, int &ans){
    // take v[i]
    ans = max(ans, k);
    if(v[i] != prev){
        dist++;
        len++;
        if(len % dist == 0){
            k = max(k, len);
        }
    }
    

    // not take v[i]
}

void solve(){
    int n;
    vector<int>v(n);
    for(int i = 0; i<n; i++)
        cin>>v[i];
    int ans = 0;
    sort(v.begin(), v.end());

    
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
