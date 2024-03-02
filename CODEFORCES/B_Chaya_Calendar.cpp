#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

void solve() {
    ll n;
    cin>>n;
    vector<int>v(n,0);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    int sum =0;
    for(int i = 0; i<n; i++){
        int k = 1;
        if(sum<v[i])
            sum = v[i];
        else{
            while(sum>=v[i]*k){
                k++;
            }
            sum = v[i]*k;
        }
    }
    cout<<sum<<"\n";

}

int main() {
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
