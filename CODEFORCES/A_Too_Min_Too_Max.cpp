#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = INT_MIN;
        sort(a.begin(), a.end());
        int mn1 = a[0];
        int mn2 = a[1];
        int mx1 = a[n-1];
        int mx2 = a[n-2];
        cout << 2*((mx1+mx2) - (mn1+mn2)) << endl;
    }
    return 0;
}
