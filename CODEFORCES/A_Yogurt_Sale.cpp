#include<bits/stdc++.h>
using namespace std;


void  solve(){
    int n, a,b;
    cin>>n>>a>>b;
    if(b<=2*a){
        cout<<(((n/2)*b) + (((n%2))*a))<<endl;
    }
    else{
        cout<<(n*a)<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}