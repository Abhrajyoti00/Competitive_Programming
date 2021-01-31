 
#include <bits/stdc++.h> 
#define ll long long
using namespace std; 
  
  
// Driver Code 
int main() 
{ 
    ll t;
    cin>>t;
    while(t--){
        ll n ;
        cin>>n;
        if(n==0)
        cout<<0<<"\n";
        else if(n%2==0)
            cout<<(n/2)-1<<"\n";
        else
            cout<<(n/2)<<"\n";
    }
    
    return 0; 
}