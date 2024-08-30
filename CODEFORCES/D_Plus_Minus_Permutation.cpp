#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, x, y;
    cin>>n>>x>>y;
    vector<int>perm(n+1, -1);
    int startnum = n;
    int startpos = x;
    for(int i = startpos; i<=n; i+=x){
        perm[i] = startnum;
        startnum--;
    }
    
    int startynum = 1;
    int startypos = y;
    for(int i = startypos; i<=n; i+=y){
        if(perm[i] ==-1){
            perm[i] = startynum;
            startynum++;
        }
    }
    int left = startynum;
    int right = startnum;
    for(int i = 1; i<=n; i++){
        if(perm[i] == -1){
            left;
            left++;
        }
    }

    ll xsum = 0;
    ll ysum = 0;
    for(int i = 1; i<=n; i++){
        if(i%x == 0)
            xsum += perm[i];
        if(i%y == 0)
            ysum+= perm[i];
    }
    cout<<xsum - ysum<<endl;
    return;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}