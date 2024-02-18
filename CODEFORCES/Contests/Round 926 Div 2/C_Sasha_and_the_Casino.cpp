#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pn printf("NO\n");
#define py printf("YES\n");

void solve(){
    ll k, x, a;
    scanf("%lld %lld %lld", &k, &x, &a);
    ll curr_bet = 1;
    ll aa = a;
    for(ll i = 1; i<x; i++){
        ll next = (curr_bet / (k - 1)) + 1;
        curr_bet += next;
        if(curr_bet > a)
        {
            pn;
            return;
        }
    }
    // Poora x loss beared

    a -= curr_bet;
    if(a < 0){
        pn;
        return;
    }
    a *= k;
    if(a > aa)
    {
        py;
        return;
    }
    pn;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}
