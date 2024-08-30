#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    int mxf = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
        mxf = max(mxf, mp[a[i]]);
    }

    cout << n - mxf << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
