#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }

    if(a == b){
        cout<<"Bob\n";
        return;
    }
    reverse(a.begin(), a.end());
    if(a == b){
        cout<<"Bob\n";
        return;
    }
    cout<<"Alice\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}