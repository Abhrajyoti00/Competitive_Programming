#include<bits/stdc++.h>
using namespace std;


void  solve(){
    int n;
    cin>>n;
    if(n%4 == 0){
        cout<<n/4<<endl;
        return;
    }
    int ans = n/4;
    ans = ans + ((n-(ans*4))/2);
    cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}