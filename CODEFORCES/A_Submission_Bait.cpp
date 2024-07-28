#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    map<int, int>mp;
    int c = 0, maxi = *max_element(arr.begin(), arr.end());
    for(int i = 0; i<n; i++){
        mp[arr[i]] ++;
        if(arr[i] == maxi)
            c++;
    }
    if(c % 2 == 1)   {
        cout<<"YES \n";
        return;
    }
    for(auto it : mp){
        if(it.second % 2 == 1){
            cout<<"YES \n";
            return;
        }
    }
    cout<<"NO \n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}