#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++)    
        cin>>v[i];
    int lm = 0;
    int len = 0;
    for(int i = 0; i<n; i++){
        if(v[i]!=0){
            lm = max(lm, len);
            len = 0;
        }
        else{
            len++;
        }
    }
    cout<<max(lm, len)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();

}