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
    int n, x;
    cin>>n>>x;
    vi v(n,0);
    vi diff;
    rep(i,0,n)
        cin>>v[i]; 
    diff.push_back((v[0]));

    rep(i,1,n){
        diff.push_back((v[i]-v[i-1]));
    }   
    diff.push_back(2*(x - v[n-1]));
    // rep(i,0,n)
        // cout<<v[i]<<" ";
    // rep(i,0,n+1)
    //     cout<<diff[i]<<" ";
    // cout<<endl;
    cout<<*max_element(all(diff))<<endl;

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