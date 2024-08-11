#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin>>n;
    string u1 = "", u2 = "";
    vector<string>v;
    for(int i =0; i<n; i++){
        char ch;
        cin>>ch;
        u1+=ch;
    }
    for(int i =0; i<n; i++){
        char ch;
        cin>>ch;
        u2+=ch;
    }
    v.push_back(u1);
    v.push_back(u2);
    int c = 0;
    for(int j = 0; j<n-2; j++){
        if((v[0][j] == 'x' && v[1][j] == '.' && v[1][j+1] == '.' && v[0][j+1] == '.' &&
        v[0][j+2] == 'x' && v[1][j+2] == '.') 
        
        || (v[1][j] == 'x' && v[0][j] == '.' &&
        v[0][j+1] == '.' && v[1][j+1] =='.' &&
        v[1][j+2] == 'x' && v[0][j+2] == '.'))
            c++;
    }
    cout<<c<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
