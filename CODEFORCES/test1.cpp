#include <bits/stdc++.h>
using namespace std;

void dfs(const string& user, unordered_map<string, vector<string>>& graph, unordered_set<string>& visited) {
    stack<string> stack;
    stack.push(user);
    while (!stack.empty()) {
        string current = stack.top();
        stack.pop();
        for (const string& neighbor : graph[current]) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                stack.push(neighbor);
            }
        }
    }
}

int minConnections(vector<vector<string>>& userConnections) {
    unordered_map<string, vector<string>> graph;
    unordered_set<string> allUsers;
    
    // Build the graph
    for (const auto& connection : userConnections) {
        string user1 = connection[0];
        string user2 = connection[1];
        graph[user1].push_back(user2);
        graph[user2].push_back(user1);
        allUsers.insert(user1);
        allUsers.insert(user2);
    }
    
    unordered_set<string> visited;
    int components = 0;
    
    // Find all connected components using DFS
    for (const string& user : allUsers) {
        if (visited.find(user) == visited.end()) {
            visited.insert(user);
            components++;
            dfs(user, graph, visited);
        }
    }
    
    // The number of additional connections needed is components - 1
    return components - 1;
}

int main() {
    vector<vector<string>> userConnections1 = { {"user1", "user2"}, {"user2", "user3"}, {"user4", "user5"} };
    cout << minConnections(userConnections1) << endl; // Output: 2

    vector<vector<string>> userConnections2 = { {"user1", "user2"}, {"user2", "user3"}, {"user3", "user4"} };
    cout << minConnections(userConnections2) << endl; // Output: 0

    vector<vector<string>> userConnections3 = { {"user1", "user2"}, {"user3", "user4"}, {"user4", "user5"}, {"user5", "user6"} };
    cout << minConnections(userConnections3) << endl; // Output: 1

    return 0;
}
