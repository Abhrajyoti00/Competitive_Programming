#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

void uf() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    map<char, long long> mp1;
    map<char, long long> mp2;

    if (s.length() < t.length()) {
        cout << "NO \n";
        return;
    }

    long long countq = 0;
    for (long long i = 0; i < s.length(); i++) {
        if (s[i] == '?')
            countq++;
    }

    if (countq >= t.length()) {
        cout << "YES\n";
        string ns = "";
        long long p = 0;
        for (long long i = 0; i < s.length(); i++) {
            if (s[i] != '?')
                ns += char(s[i]);
            else {
                if (p < t.length()) {
                    ns += char(t[p]);
                    p++;
                } else {
                    ns += 'a';
                }
            }
        }
        cout << ns << endl;
        return;
    }

    long long p = 0;
    for (long long i = 0; i < s.length(); i++) {
        if (p < t.length() && (s[i] == t[p] || s[i] == '?'))
            p++;
    }

    if (p == t.length()) {
        cout << "YES \n";
        string ns = "";
        long long q = 0;
        for (long long i = 0; i < s.length(); i++) {
            if (s[i] != '?' && q < t.length() && s[i] == t[q]) {
                ns += s[i];
                q++;
            } else if (s[i] != '?' && (q >= t.length() || s[i] != t[q])) {
                ns += s[i];
            } else if (s[i] == '?' && q < t.length()) {
                ns += t[q];
                q++;
            } else {
                ns += 'a';
            }
        }
        cout << ns << endl;
        return;
    } else {
        cout << "NO \n";
        return;
    }
}

void solve_problem() {
    string str, subseq;
    cin >> str >> subseq;

    if (str.length() < subseq.length()) {
        cout << "NO\n";
        return;
    }

    int cnt_subseq = 0, cnt_q = 0;
    int idx_str = 0, idx_subseq = 0;

    while (idx_str < str.size() && idx_subseq < subseq.size()) {
        if (str[idx_str] == subseq[idx_subseq]) {
            idx_str++;
            idx_subseq++;
        } else if (str[idx_str] == '?') {
            str[idx_str] = subseq[idx_subseq];
            idx_str++;
            idx_subseq++;
        } else {
            idx_str++;
        }
    }

    if (idx_str >= str.size() && idx_subseq < subseq.size()) {
        cout << "NO" << endl;
        return;
    } else {
        cout << "YES" << endl;
        while (idx_str < str.size()) {
            if (str[idx_str] == '?') {
                str[idx_str] = 'a';
            }
            idx_str++;
        }
        cout << str << endl;
    }
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve_problem();
    }
    return 0;
}
