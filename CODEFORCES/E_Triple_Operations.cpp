#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int minOperations(int l, int r) {
    int maxOperations = 0;
    
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, int>> testCases(t);
    
    for (int i = 0; i < t; ++i) {
        cin >> testCases[i].first >> testCases[i].second;
    }

    for (const auto& testCase : testCases) {
        cout << minOperations(testCase.first, testCase.second) << endl;
    }

    return 0;
}
