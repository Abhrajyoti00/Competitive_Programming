#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>dp(1e9+1, 0);

int solve(int n, int current_ans) {
    if (n <= 0)
        return 0;
    if ((n == 1) || (n == 3) || (n == 6) || (n == 10) || (n == 15))
        return 1;
    
    int ans = std::min({current_ans, 1 + solve(n - 1, current_ans), 1 + solve(n - 3, current_ans), 1 + solve(n - 6, current_ans), 1 + solve(n - 10, current_ans), 1 + solve(n - 15, current_ans)});
    return ans;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = INT_MAX;
        cout<<solve(n,ans);
    }
    return 0;
}
