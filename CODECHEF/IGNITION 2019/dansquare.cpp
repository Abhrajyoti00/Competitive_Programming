#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll power(ll x, ll y, ll p=1000000007) 
{ 
    ll res = 1;       
  
    x = x % p;     
                 
  
    while (y > 0) 
    { 
        
        if (y & 1) 
            res = (res*x) % p; 
  
       
        y = y>>1; 
        x = (x*x) % p;   
    } 
    return res%p; 
} 
 

ll modInverse(ll a, ll m=1000000007) 
{ 
    if (__gcd(a, m) != 1){
	}
  
    else { 
  
          return power(a, m - 2, m);
    } 
} 



int main()
{
	ll t,i;
	cin>>t;
	ll m=1000000007;
	for(i=0;i<t;i++){
		ll k;
		cin>>k;
		ll ans;
		if((k+1)%2==0){
			ll vala=power(4, k+1)%m;
			ll valb=modInverse(5*vala)%m;
			ans=((vala-1)*valb)%m;
		}
		else{
			ll vala=power(4, k+1)%m;
			ll valb=modInverse(5*vala)%m;
			ans=((vala+1)*valb)%m;
		}
	
	cout<<ans<<endl;	
	}
	
	
	
	return 0;
}