#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<int>v(n);
    for(int i =0; i<n; i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    int i = 0, j = n-1;
    cout<<v[n/2]<<endl;  
     
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
}
