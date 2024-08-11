#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool all_same(string s){
    for(ll i = 1; i<s.length(); i++){
        if(s[i]!=s[i-1])
            return false;
    }
    return true;
}

int main()
{
    ll n;
    string s;
    cin >> n;
    cin >> s;
    ll count = 1, same = 0, ans=1;
    if(all_same(s)){
        cout << ceil(n/2.0) << endl;
        return 0;
    }
    for(ll i = 1; i<n; i++){
        ans = max(ans, count);
        if(s[i]!=s[i-1]){
            count++;
            same = 0;
        }   
        else{
            same++;
        }
    }
    count = count + ceil(same/2.0);
    ans = max(ans, count);
    cout<<ans<<endl;
    return 0;
}
