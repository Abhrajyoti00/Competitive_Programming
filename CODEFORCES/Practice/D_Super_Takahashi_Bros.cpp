#include <bits/stdc++.h>

using namespace std;
using ll = long long;

constexpr int MAXN = 2e5 + 10;

vector<pair<int, ll>> g[MAXN];
ll dis[MAXN];
bool vis[MAXN];

ll dijkstra(int s, int t, int n) {
    memset(dis, 0x3f, sizeof(ll) * (n + 1));
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    dis[s] = 0;
    q.emplace(0, s);
    while(!q.empty()) {
        auto [d, u] = q.top();
        q.pop();
        if (vis[u]) continue;
        vis[u] = true;
        for (auto [v, w] : g[u]) {
            if (dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w;
                q.emplace(dis[v], v);
            }
        }
    }
    return dis[t];
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        ll a, b;
        int x;
        cin >> a >> b >> x;
        g[i].emplace_back(i + 1, a);
        g[i].emplace_back(x, b);
    }
    cout << dijkstra(1, n, n) << endl;

    return 0;
}