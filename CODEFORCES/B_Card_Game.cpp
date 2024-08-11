#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int ans = 0;

        int sn = 0, sv = 0;
        if (a1 > b1) sn++;
        if (a2 > b2) sn++;
        if (b1 > a1) sv++;
        if (b2 > a2) sv++;
        if (sn > sv) ans++;

        sn = sv = 0;
        if (a1 > b2) sn++;
        if (a2 > b1) sn++;
        if (b2 > a1) sv++;
        if (b1 > a2) sv++;
        if (sn > sv) ans++;

        sn = sv = 0;
        if (a2 > b1) sn++;
        if (a1 > b2) sn++;
        if (b1 > a2) sv++;
        if (b2 > a1) sv++;
        if (sn > sv) ans++;

        sn = sv = 0;
        if (a2 > b2) sn++;
        if (a1 > b1) sn++;
        if (b2 > a2) sv++;
        if (b1 > a1) sv++;
        if (sn > sv) ans++;

        cout << ans << endl;
    }
    return 0;
}
