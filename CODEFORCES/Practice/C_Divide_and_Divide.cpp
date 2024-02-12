#include <bits/stdc++.h>
using namespace std;
#define ll long long

unordered_map<ll, ll> dp;  // dpization map

ll helper(ll n) {
    if (n < 2) {
        return 0;
    }

    if (dp.find(n) != dp.end()) {
        return dp[n];
    }

    ll duplicate = n;
    ll cost = n;

    duplicate = static_cast<ll>(floor(static_cast<long double>(duplicate) / 2.0));
    cost += helper(duplicate);

    duplicate = static_cast<ll>(ceil(static_cast<long double>(n) / 2.0));
    cost += helper(duplicate);

    return dp[n] = cost;
}

int main() {
    ll n;
    cin >> n;

    ll ans = helper(n);

    cout << ans << endl;

    return 0;
}
