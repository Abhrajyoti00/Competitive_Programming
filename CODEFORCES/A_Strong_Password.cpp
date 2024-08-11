#include <bits/stdc++.h>
using namespace std;
#define ll long long

int curr_time(string s) {
    if(s.length() == 0) return 0;
    int time = 2; 
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1])
            time += 1;
        else
            time += 2;
    }
    return time;
}

void solve() {
    string s;
    cin >> s;
    int max_time = 0;
    string newPass = "";
    
    for (char c = 'a'; c <= 'z'; ++c) {
        for (int i = 0; i <= s.length(); ++i) {
            string tempPass = s.substr(0, i) + c + s.substr(i);
            int time = curr_time(tempPass);
            if (time > max_time) {
                max_time = time;
                newPass = tempPass;
            }
        }
    }
    cout << newPass << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
