#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <unordered_map>
#include <string>
#define MOD 1000000007

using namespace std;

int count_paths(int numNodes, int numEdges, int maxLength, string &letters, vector<pair<int, int>> &edges) {
    // Create adjacency list
    unordered_map<int, list<int>> graph;
    for (auto &edge : edges) {
        int u = edge.first;
        int v = edge.second;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    // Initialize DP table
    vector<vector<int>> dp(maxLength + 1, vector<int>(numNodes, 0));
    
    // Set initial values for paths of length 0
    for (int i = 0; i < numNodes; ++i) {
        dp[0][i] = 1;
    }
    
    // Fill DP table
    for (int length = 1; length <= maxLength; ++length) {
        for (int node = 0; node < numNodes; ++node) {
            for (int neighbor : graph[node]) {
                if (letters[neighbor] != letters[node]) {
                    dp[length][neighbor] = (dp[length][neighbor] + dp[length - 1][node]) % MOD;
                }
            }
        }
    }
    
    // Sum up all paths of length maxLength
    int result = 0;
    for (int i = 0; i < numNodes; ++i) {
        result = (result + dp[maxLength][i]) % MOD;
    }
    return result;
}

int main() {
    // Input
    int numNodes, numEdges, maxLength;
    cin >> numNodes >> numEdges >> maxLength;
    string letters;
    cin >> letters;
    vector<pair<int, int>> edges(numEdges);
    for (int i = 0; i < numEdges; ++i) {
        cin >> edges[i].first >> edges[i].second;
    }
    
    // Output the result
    cout << count_paths(numNodes, numEdges, maxLength, letters, edges) << endl;
    return 0;
}
