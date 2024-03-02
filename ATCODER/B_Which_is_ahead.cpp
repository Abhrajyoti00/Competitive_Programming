#include<bits/stdc++.h>
using namespace std;

bool compareByValue(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n, 0);

    for (int i = 0; i < n; i++)
        cin >> p[i];

    int q;
    cin >> q;
    vector<int> a(q, 0);
    vector<int> b(q, 0);

    vector<pair<int, int>> mp; 

    for (int i = 0; i < n; i++) {
        int idx = i;
        int pid = p[i];
        mp.push_back({pid, idx}); 
    }

    sort(mp.begin(), mp.end(), compareByValue);

    for (int i = 0; i < q; i++) {
        cin >> a[i] >> b[i];

        auto it1 = find_if(mp.begin(), mp.end(), [&](const pair<int, int>& element) { return element.first == a[i]; });
        auto it2 = find_if(mp.begin(), mp.end(), [&](const pair<int, int>& element) { return element.first == b[i]; });

        int id1 = it1->second;
        int id2 = it2->second;

        if (id1 < id2) {
            cout << it1->first<<"\n";
        } else {
            cout << it2->first<<"\n";
        }
    }

    return 0;
}
