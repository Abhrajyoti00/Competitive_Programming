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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    ll sL_ans = n;
    for (ll substringLength = 1; substringLength <= n; ++substringLength)
    {
        if (n % substringLength == 0)
        {
            ll count = 0;
            for (int j = 0; j < substringLength; ++j)
            {
                ll maxFrequency = 0, finalCount = 0;
                unordered_map<char, ll> characterFrequency;
                for (int k = j; k < n; k += substringLength)
                {
                    characterFrequency[s[k]]++;
                    maxFrequency = max(maxFrequency, characterFrequency[s[k]]);
                    finalCount++;
                }
                count += (finalCount - maxFrequency);
            }
            if (count < 2)
            {
                sL_ans = min(sL_ans, (ll)substringLength);
            }
        }
    }
    cout << sL_ans << endl;
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
