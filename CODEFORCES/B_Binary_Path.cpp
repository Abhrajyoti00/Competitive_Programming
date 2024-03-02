#include<bits/stdc++.h>
using namespace std;

int rec(string ans, string s1, string s2, int l, int r) {
    if (l == s1.length() - 1 && r == s2.length() - 1) {
        // Base case: reached the bottom-right cell
        cout << ans << endl;
        return 1;
    }

    int paths = 0;

    if (s1[l] == s2[r]) {
        // If the characters are equal, we have two choices: go right or go down
        paths += rec(ans + s1[l], s1, s2, l + 1, r) + rec(ans + s1[l], s1, s2, l, r + 1);
    } else if (s1[l] < s2[r]) {
        // If the character in the top row is smaller, go down
        paths += rec(ans + s1[l], s1, s2, l + 1, r);
    } else {
        // If the character in the bottom row is smaller, go right
        paths += rec(ans + s2[r], s1, s2, l, r + 1);
    }

    return paths;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;

        char arr[2][n];
        for (int j = 0; j < n; j++) {
            arr[0][j] = s1[j];
            arr[1][j] = s2[j];
        }

        string ans = "";
        int down = -1, lp = 0;
        for (int i = 0; i < n; i++) {
            if ((down == -1) && (arr[0][i] < arr[1][i])) {
                ans = ans + arr[0][i];
                lp = i;
            } else if (arr[0][i] > arr[1][i]) {
                ans = ans + arr[1][i];
                down = 1;
                lp = i;
                break;
            } else if (arr[0][i] == arr[1][i]) {
                if (arr[0][i] == '1') {
                    ans = ans + arr[0][i];
                    lp = i;
                } else {
                    ans = ans + arr[1][i];
                    down = 1;
                    lp = i;
                    break;
                }
            }
        }
        if (down == -1) {
            while (lp < n) {
                ans += arr[0][lp];
                lp++;
            }
        }
        if (down == 1) {
            while (lp < n) {
                ans += arr[1][lp];
                lp++;
            }
        }
        cout<<ans<<endl;

        // Calculate the number of paths
        // int nop = rec(ans, s1, s2, lp, lp);
        // cout << nop << endl;
    }

    return 0;
}
