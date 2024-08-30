#include<bits/stdc++.h>
using namespace std;
#define ll long long
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

ll square(ll x) {
    return x * x;
}

ll squaredDistance(ll x1, ll y1, ll x2, ll y2) {
    return square(x1 - x2) + square(y1 - y2);
}

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> circles(n);
    
    for (ll i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        circles[i] = {x, y};
    }

    ll xs, ys, xt, yt;
    cin >> xs >> ys >> xt >> yt;
    
    ll distSqr = squaredDistance(xs, ys, xt, yt);
    for (ll i = 0; i < n; i++) {
        ll xc = circles[i].first, yc = circles[i].second;
        
        ll pd = squaredDistance(xc, yc, xt, yt);
        if(pd <= distSqr){
            cout<<"NO \n";
            return;
        }
    }
        cout<<"YES \n";
}

int main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
