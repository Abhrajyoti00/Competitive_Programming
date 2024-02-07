#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (auto &ele : v) {
            cin >> ele;
        }

        vector<int> nv;
        for (int i = 1; i < n; i++) {
            if (v[i] != v[i - 1])
                nv.push_back(i - 1);
        }

        int q;
        cin >> q;
        for (int i = 0; i < q; i++) {
            int l, r;
            cin >> l >> r;
            l -= 1;
            r -= 1;

            int lb = lower_bound(nv.begin(), nv.end(), l) - nv.begin();
            if (lb < nv.size() && nv[lb] < r)
                cout << nv[lb] + 1 << " " << nv[lb] + 2 << '\n';
            else
                cout << "-1 -1\n";
        }
        cout << '\n';
    }

    return 0;
}
