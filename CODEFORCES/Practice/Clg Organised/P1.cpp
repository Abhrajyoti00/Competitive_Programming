#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define REP(i,a,b) for (int i = a; i <= b; i++)  // Use as REP(i,1,n){}
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x) 
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define SQ(a) (a)*(a)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define sortdes(x) sort(all(x),greater<int>())
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
int mpow(int base, int exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N]; 
  
vector<ll> fillit() 
{ 
    vector<ll> dp(16, -1); 
    dp[0] = 0; 
  
    for (ll i = 1; i < 16; ++i) { 
  
        for (auto j : vector<ll>{ 4, 6, 9 }) { 
  
            if (i >= j && dp[i - j] != -1) { 
                dp[i] = max(dp[i], dp[i - j] + 1); 
            } 
        } 
    } 
  
    return dp; 
} 
  

ll count(vector<ll> dp, ll n) 
{ 
    // If n is a smaller number, less than 16 
    // return dp[n] 
    if (n < 16) 
        return dp[n]; 
  
    else { 
  
        
        ll temp = (n - 16) / 4 + 1; 
        return temp + dp[n - 4 * temp]; 
    } 
} 
  
int main() {
    ll q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        vector<ll> dp = fillit(); 
        cout << count(dp, n) << "\n"; 
    }

    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
    int i, u, v;
    while(m--){
        cin>>u>>v;
        g[u-1].pb(v-1);
        g[v-1].pb(u-1);
    }
}

void dfs(int u, int par){
    for(int v:g[u]){
        if (v == par) continue;
        dfs(v, u);
    }
}
