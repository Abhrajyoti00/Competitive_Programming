#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<vector<int>> v(n, vector<int>(n, 0));
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int ele;
            cin >> ele;
            mp[ele]++;
        }
    }
    int minElement = mp.begin()->first;
    v[0][0] = minElement;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1; j++) {
            v[i+1][j] = v[i][j] + c;
            // cout<<v[i+1][j]<<endl;
            if(mp.find(v[i+1][j]) == mp.end() || mp[v[i+1][j]] == 0) {
                cout << "NO\n";
                return;
            }
            // mp[v[i+1][j]]--;
            v[i][j+1] = v[i][j] + d;
            // cout<<v[i+1][j]<<endl;

            if(mp.find(v[i][j+1]) == mp.end() || mp[v[i][j+1]] == 0) {
                cout << "NO\n";
                return;
            }
            // mp[v[i][j+1]]--;
        }
    }
    v[n-1][n-1] = v[n-1][n-2] + d;
    if(mp.find(v[n-1][n-1]) == mp.end() || mp[v[n-1][n-1]] == 0) {
        cout << "NO\n";
        return;
    }
    map<int,int>mp2;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            mp2[v[i][j]]++;
        }
    }
    for(auto &[key, val] : mp) {
        if(mp[key] != mp2[key]){
            cout<<"NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
