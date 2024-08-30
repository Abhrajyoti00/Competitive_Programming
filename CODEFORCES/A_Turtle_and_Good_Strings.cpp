#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    
    int i = 0, j = n-1;
    if(s[0] == s[n-1]){
        cout<<"NO \n";
        return;
    }
    cout<<"YES \n";
    return;
     
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
}
