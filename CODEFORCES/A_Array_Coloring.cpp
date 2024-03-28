#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    int ce = 0, co = 0;
    for(auto &it : a){
        if(it%2 == 0)
            ce++;
        else
            co++;
    }
    if(co%2==1){
        cout<<"NO\n";
        return;
    }
        cout<<"YES\n";
    
}

int main(){
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
