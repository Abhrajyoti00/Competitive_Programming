#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    int mneg = INT_MAX, mpos = INT_MAX;
    for(int i = 0; i<n; i++){
        if(v[i] == 0){
            cout<<0<<endl;
            return;
        }
        if(v[i] < 0){
            mneg = min(mneg, abs(v[i]));
        }
        if(v[i]>0)
            mpos = min(mpos, v[i]);
    }
    int ans = min(abs(mneg), abs(mpos));
    cout<<ans<<endl;
    return;
}

int main(){
    int t = 1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}
