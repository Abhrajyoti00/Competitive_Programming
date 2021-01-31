#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll pf(ll n) {
   ll c=0;
   while (n%2 == 0){
      c++;
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         c++;
         n = n/i;
      }
   }
   if (n > 2)
   c++;
   return c;
}
int main() 
{ 
    ll t;
    cin>>t;
    while(t--){
        ll x,k,s=0;
        cin>>x>>k;
        s=pf(x);
        if(s>=k)
        cout<<1<<endl;
        else
        cout<<0<<endl;
        
    }
}