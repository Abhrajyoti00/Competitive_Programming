#include <bits/stdc++.h>
using namespace std;

string trim(string str);
vector<string> splitString(string str);

const int MOD = 1e9 + 7;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void dfs(int node, int parent, int current_gcd, vector<int>& A, vector<vector<int>>& tree, int& count) {
    current_gcd = gcd(current_gcd, A[node]);
    if (current_gcd == 1) {
        count = (count + 1) % MOD;
    }
    for (int neighbor : tree[node]) {
        if (neighbor != parent) {
            dfs(neighbor, node, current_gcd, A, tree, count);
        }
    }
}

int get_ans(int N, int M, int two, vector<int> A, vector<vector<int>> edges) {
    vector<vector<int>> tree(N + 1); // Adjust the size to N + 1
    for (auto& edge : edges) {
        tree[edge[0]].push_back(edge[1]);
        tree[edge[1]].push_back(edge[0]);
    }
    
    int count = 0; // Initialize count to 0
    dfs(1, -1, A[1], A, tree, count); // Start DFS from node 1
    
    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string inputline;
    getline(cin, inputline);
    int N = stoi(trim(inputline));
    
    getline(cin, inputline);
    int M = stoi(trim(inputline));
    
    getline(cin, inputline);
    int two = stoi(trim(inputline));  // This value will always be 2
    
    vector<int> A(N + 1); // Adjust the size to N + 1
    for (int j = 1; j <= N; j++) {
        getline(cin, inputline);
        A[j] = stoi(trim(inputline));
    }
    
    vector<vector<int>> edges(M, vector<int>(two));
    for (int i = 0; i < M; i++) {
        getline(cin, inputline);
        vector<string> inputLineArr = splitString(trim(inputline));
        for (int j = 0; j < two; j++) {
            edges[i][j] = stoi(inputLineArr[j]);
        }
    }
    
    int result = get_ans(N, M, two, A, edges);
    cout << result << "\n";
    return 0;
}

/* Utility functions. Don't modify these */
string trim(string str) {
    if (str.empty())
        return str;
    size_t firstScan = str.find_first_not_of(' ');
    size_t first = firstScan == string::npos ? str.length() : firstScan;
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, last - first + 1);
}

vector<string> splitString(string str) {
    istringstream iss(str);
    vector<string> tokens;
    string token;
    while (iss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}
