#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s; // lower case
    int q;
    cin >> q;
    string ns = s;
    map<char, char>mp;

    for (int i = 0; i < q; i++) {
        char c, d;
        cin >> c >> d;
        mp[c] = d;
        if(mp.find(d) != mp.end()) //means exist in map
        {
            int i = 0;
            for(auto &it: mp){
                char a = it.first;
                char b = it.second;
                if(b == d){
                    break;
                }
                mp[a] = d;
            }
        }
    }
    for(auto &it: mp){
        char a = it.first;
        char b = it.second;
        cout<<a<<" "<<b<<endl;
    }
    for(int i = 0; i<s.length(); i++){
        ns[i] = mp[s[i]];
    }
    cout << ns;

    return 0;
}
