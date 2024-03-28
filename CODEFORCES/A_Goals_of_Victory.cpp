#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n-1,0);
    int sum = 0;
    for(int i = 0; i<n-1; i++)
    {
        cin>>v[i];
        sum+=v[i];

    }
    cout<<(-1*sum)<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
