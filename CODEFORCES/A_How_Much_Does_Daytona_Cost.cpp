#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> v(n,0);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        if(v[i] == k)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
