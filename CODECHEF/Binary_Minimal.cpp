#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

unordered_map<string, string> memo;

string bin_min(string s, int n, int k) {
    if (k == 0)
        return s;

    string key = s + "_" + to_string(k);
    if (memo.find(key) != memo.end())
        return memo[key];

    string minString = s;
    
    for (int i = 0; i < n; ++i) {
        string currentString = s;
        currentString[i] = (currentString[i] == '0') ? '1' : '0'; //flip
        string ans1 = bin_min(currentString, n, k - 1);

        string deletedString = s.substr(0, i) + s.substr(i + 1);
        string ans2 = bin_min(deletedString, n - 1, k - 1);
        minString = min(minString, min(ans1, ans2));
    }

    memo[key] = minString;
    return minString;
}

string bin_min2(string inputStr, int length, int flipsRemaining) {
    if (flipsRemaining == 0)
        return inputStr;

    int onesCount = 0;
    for (int i=0; i<length; i++) {
        if (inputStr[i] == '1')
            onesCount++;
    }

    if (onesCount <= flipsRemaining) {
        return string(length - flipsRemaining, '0');
    }

    int flipsDone = 0;
    for (int i = 0; i < length; ++i) {
        if (inputStr[i] == '1') {
            inputStr[i] = '0';
            ++flipsDone;
            if (flipsDone == flipsRemaining)
                break;
        }
    }

    return inputStr;
}



    // string s1 = copy.substr(k1);
    // string s2 = s.substr(k2);

    // cout<<"s1 = "<<s1<<" s2 = "<<s2<<endl;
    
//     return min(s1,s2);
// }

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // cout << bin_min(s, n, k) << endl;
    cout << bin_min2(s, n, k) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
