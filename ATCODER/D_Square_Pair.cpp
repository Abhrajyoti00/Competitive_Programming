#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<ll> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    auto iPS = [](ll num) {
        ll root = static_cast<ll>(sqrt(num));
        return root * root == num;
    };

    ll count = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            ll product = A[i] * A[j];
            if (iPS(product)) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
