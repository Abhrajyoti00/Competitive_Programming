#include <bits/stdc++.h>
using namespace std;
#define ll long long


void binary(ll num){
      //converts the number to binary
      //and removes leading zeroes
     cout << bitset<32>(num).to_string().substr(32 - log2(num + 1));
}
 

void solve(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        binary(n);
        cout<<endl;
        binary(25);
        cout<<endl;

    }
}



int main() {
	
    solve();
}
