
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
 
bool isSubstring(string s1, string s2)
{
    if (s2.find(s1) != -1)
        return true;
    return false;
}

void solve(){
    int n, m;
    cin>>n>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    int c = 0;
    for(int i = 0; i<6; i++){
        if(isSubstring(s, x)){
            cout<<i<<endl;
            return;
        }
        x+=x;
    }
    cout<<-1<<endl;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    cin>>t;
    for(int i = 1; i<=t; i++){
        // cout<<"t = "<<i<<endl;
        solve();
    }
    return 0;
}