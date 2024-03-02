#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    ll prd = 1;
    for (ll i = 0; i < n; i++) {
        ll ele;
        cin >> ele;
        v.push_back(ele);
        prd = (prd * (ele));
    }
    string s;
    cin >> s;

    cout << prd % m << " ";
    ll start = 0, end = n-1;
    for (ll i = 0; start<end && i < n; i++) {
        if (s[i] == 'L') {
            prd /= v[start];
            start+=1;
        } else if (s[i] == 'R') {
            prd /= v[end];
            end-=1;
        }
        cout << (prd % m) << " ";
    }
    cout << "\n";
}

int main() {
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
