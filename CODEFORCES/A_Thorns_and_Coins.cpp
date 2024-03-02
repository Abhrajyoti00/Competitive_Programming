#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int c = 0;
    for(int i = 0 ; i<n; i++){
        if(s[i] == '*' && s[i+1] == '*')
            break;
        if(s[i] == '@')
            c++;
    }
    cout<<c<<"\n";
}


int main() {
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
