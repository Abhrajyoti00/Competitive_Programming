#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<int> parent(n + 1);
    for (int i = 2; i <= n; ++i) {
        cin >> parent[i];
    }
    
    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
    }
    
    while (q--) {
        int x, y;
        cin >> x >> y;
        int mx  = max(x ,y);
        int my = min(x, y);
        int f = 0;
        if(mx/2 == my){
            f = 1;
            cout<<"NO \n";
        }
        while((mx!=1) && (f == 0)){
            if(mx == my){
                f = 1;
                cout<<"NO \n";
                break;
            }
            mx/=2;
        }
        if(mx == 1 && f == 0)
            cout<<"YES \n"; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        // cout<<"case "<<t<<endl;
        solve();
    }
    return 0;
}
