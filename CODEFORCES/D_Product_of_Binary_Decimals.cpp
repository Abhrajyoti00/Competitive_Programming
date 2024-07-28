#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vs vector<string>
#define pi pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = a; i < (int)b; i++)

int const mod = 1e9 + 7;

bool isBinaryDecimal(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}

bool canRepresentAsProduct(int n) {
    if (isBinaryDecimal(n))
        return true;

    for (int i = 2; i <= n; ++i) {
        if (isBinaryDecimal(i)) {
            while (n % i == 0) {
                n /= i;
            }
            if (n == 1)
                return true;
        }
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    if (canRepresentAsProduct(n))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}