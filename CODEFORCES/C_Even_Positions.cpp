#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    int op = 0;
    s[0] = '(';
    for(int i = 0; i<n; i++){
        if(s[i] == '('){
            op++;
        }
        else if(s[i] == ')'){
            op--;
        }
        else{
            if(op>0){
                s[i] = ')';
                op--;
            }
            else{
                s[i] = '(';
                op++;
            }
        }
    }
    // cout<<s<<endl;
    stack<int>st;
    for(int i = 0; i<n; i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            int x = st.top();
            st.pop();
            ans += (i-x);
        }
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
