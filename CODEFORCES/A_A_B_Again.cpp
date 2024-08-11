#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    int ld = n%10;
    int fd = (n/10)%10;
    cout<<(ld+fd)<<endl;
     
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
}
