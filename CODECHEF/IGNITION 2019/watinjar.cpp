#include<bits/stdc++.h>
using namespace std;
const int N = 10000001; 
#define ll long long

// array to store inverse of 1 to N 
ll factorialNumInverse[N + 1]; 
  
// array to precompute inverse of 1! to N! 
ll naturalNumInverse[N + 1]; 
  
// array to store factorial of first N numbers 
ll fact[N + 1]; 
  
// Function to precompute inverse of numbers 
void InverseofNumber(ll p) 
{ 
    naturalNumInverse[0] = naturalNumInverse[1] = 1; 
    for (int i = 2; i <= N; i++) 
        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p; 
} 
// Function to precompute inverse of factorials 
void InverseofFactorial(ll p) 
{ 
    factorialNumInverse[0] = factorialNumInverse[1] = 1; 
  
    // precompute inverse of natural numbers 
    for (int i = 2; i <= N; i++) 
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p; 
} 
  
// Function to calculate factorial of 1 to N 
void factorial(ll p) 
{ 
    fact[0] = 1; 
  
    // precompute factorials 
    for (int i = 1; i <= N; i++) { 
        fact[i] = (fact[i - 1] * i) % p; 
    } 
} 
  
// Function to return nCr % p in O(1) time 
ll Binomial(ll N, ll R, ll p) 
{ 
    // n C r = n!*inverse(r!)*inverse((n-r)!) 
    ll ans = ((fact[N] * factorialNumInverse[R]) 
              % p * factorialNumInverse[N - R]) 
             % p; 
    return ans; 
} 
  

int main()
{
    ll n,q,s=0,x,sum=0,d;
    cin>>n>>q;
    ll a[n];
    ll p = 1000000007; 
    InverseofNumber(p); 
    InverseofFactorial(p); 
    factorial(p); 

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s=((s+a[i])%p) ;
    }
    for(ll i=0;i<q;i++)
    {
        cin>>x;
        if(x<s)
        {
            cout<<-1<<endl;
        }
        else
        {
             d=(x-s);
                         //cout<<x<<" "<<s<<endl;
            sum=Binomial((n+d-1),(n-1), p);
            cout<<sum%p<<endl;

        }
        
    }
}