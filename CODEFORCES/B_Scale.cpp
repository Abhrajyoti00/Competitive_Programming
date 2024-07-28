#include<bits/stdc++.h>
using namespace std;


void  solve(){
    int n, k;
    cin>>n>>k;
    vector<vector<char>>v(n, vector<char>(n,'0'));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>v[i][j];
        }
    }
    for(int i = 0; i<n; i = i+k){
        for(int j = 0; j<n; j = j+k){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}