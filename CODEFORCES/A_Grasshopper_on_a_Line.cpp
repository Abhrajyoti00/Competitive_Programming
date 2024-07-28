#include<bits/stdc++.h>
using namespace std;
 
void dbg_out() {cerr << endl;}
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {cerr<<' '<<H; dbg_out(T...);}
#define dbg(...) cerr<<"("<<#__VA_ARGS__<<"):", dbg_out(__VA_ARGS__)
 
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vs vector<string>
#define pi pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()
#define rep(i,a,b) for(int i=a; i<(int)b; i++) 
 
int const mod=1e9+7;
 
void solve(){
    int x, k;
    cin>>x>>k;
    if(x%k != 0){
        cout<<1<<endl;
        cout<<x<<endl;
        return;
    }
    else{
        cout<<2<<endl;
        cout<<x-1<<" "<<1<<endl;
        return;
    }
    
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}