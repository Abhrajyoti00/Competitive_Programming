#include<bits/stdc++.h>
using  namespace std;

void solve(){
    string s;
    cin>>s;
    for(int i=0; i<s.length()-1; i++){
        if(s[i] == 'i' && s[i+1] == 't'){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
}

int main(){
        int t;
        cin>>t;
        while(t--){
            solve();

        }
}