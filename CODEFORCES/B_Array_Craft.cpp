#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x ,y;
    cin>>n>>x>>y;
    vector<int>arr(n+1, 1);
    int e = -1;
    for(int i = y-1; i>=1; i--){
        arr[i] = e;
        e *= (-1);
    }
    e = -1;
    for(int i = x+1; i<=n; i++){
        arr[i] = e;
        e *= (-1);
    }
    for(int i = 1; i<n+1; i++)
        cout<<arr[i]<<" ";
    return;
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