#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 200000;

vector<bool> prime_hai(MAXN + 1, true);

void sieve() {
    prime_hai[0] = prime_hai[1] = false;
    for (int i = 2; i * i <= MAXN; ++i) {
        if (prime_hai[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                prime_hai[j] = false;
            }
        }
    }
}

int colorGraph(int n, vector<int>& color) {
    vector<vector<int>> adj(n + 1);
    
    for (int u = 1; u <= n; ++u) {
        for (int v = u + 1; v <= n; ++v) {
            if (prime_hai[u ^ v]) {
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }
    }

    int max_color = 0;
    for (int u = 1; u <= n; ++u) {
        if (color[u] == 0) {
            queue<int> q;
            q.push(u);
            color[u] = 1;

            while (!q.empty()) {
                int curr = q.front();
                q.pop();
                vector<bool> used_colors(1e5, false);

                for (int v : adj[curr]) {
                    if (color[v] != 0) {
                        used_colors[color[v]] = true;
                    }
                }

                for (int c = 1; c <= 1e5; ++c) {
                    if (!used_colors[c]) {
                        color[curr] = c;
                        break;
                    }
                }

                max_color = max(max_color, color[curr]);

                for (int v : adj[curr]) {
                    if (color[v] == 0) {
                        q.push(v);
                    }
                }
            }
        }
    }

    return max_color;
}

void solve() {
    ll n;
    cin >> n;
    vector<int> color(n + 1, 0);
    int min_colors = colorGraph(n, color);

    cout << min_colors << "\n";
    for (int i = 1; i <= n; ++i) {
        cout << color[i] << " ";
    }
    cout << "\n";
}

int main() {
    sieve();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
