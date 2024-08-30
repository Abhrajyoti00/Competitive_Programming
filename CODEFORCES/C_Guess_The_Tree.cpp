#include <iostream>
#include <vector>
using namespace std;

void solve(int n) {
    vector<pair<int, int>> edges;
    vector<int> parent(n + 1, -1);
    parent[1] = 1; // Root node assumed to be 1

    // Identify direct children of node 1
    for (int i = 2; i <= n; ++i) {
        cout << "? 1 " << i << "\n";
        cout.flush();  // Ensure the output is sent immediately
        int x;
        cin >> x;  // Read the response
        if (x == 1) {
            edges.push_back({1, i});
            parent[i] = 1;
        }
    }

    // For each node connected to 1, find the other connections
    for (auto& edge : edges) {
        int node = edge.second;
        for (int i = 2; i <= n; ++i) {
            if (i != node && parent[i] == -1) {
                cout << "? " << node << " " << i << "\n";
                cout.flush();  // Ensure the output is sent immediately
                int x;
                cin >> x;  // Read the response
                if (x == node) {
                    edges.push_back({node, i});
                    parent[i] = node;
                }
            }
        }
    }

    // Output the result
    cout << "! ";
    for (auto& edge : edges) {
        cout << edge.first << " " << edge.second << " ";
    }
    cout << endl;
    cout.flush();  // Ensure the final output is sent
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
