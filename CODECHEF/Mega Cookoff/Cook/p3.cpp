#include<bits/stdc++.h>
#define ll long long 
#define pb push_back 
#define mp make_pair 
#define F first 
#define S second 
#define f(i,n) for(int i=0;i<n;i++) 
#define fr(i,a,b) for(int i=a;i<b;i++) 
 
using namespace std;
 
ll mod =  998244353 ;
 
ll power(ll x, ll y, ll p) 
{ 
    ll res = 1LL; 
    x = x % p;
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1;
        x = (x*x) % p;   
    } 
    return res; 
}
 
ll fun2(ll n){
	ll ans = power(2,n,mod);
	ans = (ans-1+mod)%mod;
	return ans;
}
 
void test(){
	ll n;
	cin>>n;
	ll a[n];
	f(i,n)cin>>a[i];
	map<ll,ll> m;
	f(i,n){
		m[a[i]]++;
	}
	ll sum = 0;
	ll count  = 0;
	int cur = 1;
	ll count1 = 0;
	for(auto it = m.begin();it!=m.end();it++){
		if((*it).F==cur){
			if(count==0)count = fun2((*it).S);
			else {
				count = count*fun2((*it).S);
			}
			count1 = count1 + count;
			sum = sum + (count*(cur+1));
			cur++;
		}else
			break;
	}
	ll tot = power(2,n,mod);
	tot = (tot - count1 + mod)%mod;
	sum = (sum + tot)%mod;
	cout<<sum<<"\n";
}
 
int main(){
	int t=1;
	cin>>t;
	while(t--){
		test();
	}
}