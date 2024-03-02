#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int t;
    cin>>t;
    while(t--){
        ll tor,toc,nor,noc,l, ans = 0;
        cin>>tor>>toc>>nor>>noc>>l;
        ll part_a = (((nor-1)/l) + ((noc-1)/l)*((nor-1)/l) + ((noc-1)/l));
        // cout<<part_a<<" ";
        ll part_b = ((toc - noc)/l) * ((nor-1)/l) + ((toc-noc)/l);
        // cout<<part_b<<" ";

        ll part_c = ((tor - nor)/l) + (((noc-1)/l)*((tor-nor)/l));
        // cout<<part_c<<" ";

        ll part_d = ((toc - noc)/l)*((tor-nor)/l);
        // cout<<part_d<<" ";

        ll tot = (part_a + part_b + part_c + part_d);
        // cout<<tot<<"\n";
        ans = tot+1;
        cout<<ans<<"\n";
        
        // ll tor,toc,cr,cc,l, ans = 0;
        // cin>>tor>>toc>>cr>>cc>>l;

        // ll right_possible = (toc - cc)/l;
        // ll left_possible = (cc - 1)/l;
        // ll up_possible = (cr - 1)/l;
        // ll down_possible = (tor - cr)/l;

        // ll part_a = right_possible*up_possible + right_possible;
        // ll part_b = left_possible*up_possible + left_possible;
        // ll part_c = right_possible * down_possible + right_possible;
        // ll part_d = left_possible * down_possible + left_possible;

        // ll tot = (part_a + part_b + part_c + part_d);
        // // cout<<tot<<"\n";
        // ans = tot+1;
        // cout<<ans<<"\n";


   }
}

int main() {
	
    solve();
}
