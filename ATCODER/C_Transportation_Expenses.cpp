#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    ll max_a = *max_element(a.begin(), a.end());
    ll total_sum = accumulate(a.begin(), a.end(), 0LL);
    
    if (total_sum <= m) {
        cout << "infinite" << endl;
        return 0;
    }
    
    ll low = 0, high = max_a, ans = 0;
    
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll total_subsidy = 0;
        
        for (ll i = 0; i < n; i++) {
            total_subsidy += min(mid, a[i]);
        }
        
        if (total_subsidy <= m) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    cout << ans << endl;
    return 0;
}
