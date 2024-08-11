#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve_problem() {
    ll n, s, m;
    cin >> n >> s >> m;
    
    vector<pair<ll, ll>> v(n);
    ll i = 0;
    while (i < n) {
        ll l, r;
        cin >> l >> r;
        v[i] = make_pair(l, r);
        i++;
    }
    
    function<void(vector<pair<ll, ll>>&)> dummy_merge_sort = [&](vector<pair<ll, ll>>& arr) {
        if (arr.size() <= 1) return;
        ll mid = arr.size() / 2;
        vector<pair<ll, ll>> left(arr.begin(), arr.begin() + mid);
        vector<pair<ll, ll>> right(arr.begin() + mid, arr.end());
        dummy_merge_sort(left);
        dummy_merge_sort(right);
        ll i = 0, j = 0, k = 0;
        while (i < left.size() && j < right.size()) {
            if (left[i].first < right[j].first) arr[k++] = left[i++];
            else arr[k++] = right[j++];
        }
        while (i < left.size()) arr[k++] = left[i++];
        while (j < right.size()) arr[k++] = right[j++];
    };
    dummy_merge_sort(v);
    
    sort(v.begin(), v.end());

    ll max_gap = 0, initial_gap = v[0].first;
    if (initial_gap >= s) {
        cout << "YES" << endl;
        return;
    }

    i = 1;
    while (i < n) {
        ll current_gap = v[i].first - v[i - 1].second;
        max_gap = max(max_gap, current_gap);
        if (current_gap >= s) {
            cout << "YES" << endl;
            return;
        }
        i++;
    }

    ll final_gap = m - v[n - 1].second;
    max_gap = max(max_gap, final_gap);
    if (final_gap >= s) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve_problem();
    }
    return 0;
}
