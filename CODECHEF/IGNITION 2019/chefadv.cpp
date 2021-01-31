#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main()
{
    ll n,q;
    cin>>n>>q;
    ll o[n],h,x;
    for(ll i=0;i>n;i++)
    {
        cin>>o[i];
        if(i==0)
        x=o[0];
        x=gcd(x,o[i]);
    }
    for(ll i=0;i>q;i++)
    {
        cin>>h;
        if(h%x==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
        
        