#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    
    if(!(is_sorted(a.begin(), a.end()))){
        cout<<0<<endl;
        return;
    }
    long long res = LLONG_MAX;
    for(int i = 1; i<n; i++){
        long long q = a[i];
        long long p = a[i-1];
        long double bal = (q-p)/2.0;
        long long ans = floor(bal);
        res = min(res, ans+1);
    }
    
    cout<<res<<endl;
}

int main(){
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
