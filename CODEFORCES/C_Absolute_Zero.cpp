#include<bits/stdc++.h>
using namespace std;
#define ll long long

void  solve(){
    ll n;
    cin>>n;

    ll c = 0;
    vector<ll>a(n);
    for(ll i = 0 ; i<n; i++){
        cin>>a[i];
    }
    if(n == 1){
        cout<<1<<endl;
        cout<<a[0]<<endl;
        return;
    }
    for(ll i = 0; i<n; i++){
        if(a[i]!=0)
            c++;
    }
    if(c == 0){
        cout<<0<<endl;
        cout<<endl;
        return;
    }    
    vector<ll>ansvec;
    ll ans = 0;
    ll k = 0;
    while(k<40){
        k++;
        ll mx = *max_element(a.begin(), a.end());
        ll mn = *min_element(a.begin(), a.end());

        ll avg = (mx+mn)/2;
        // cout<<"Avg = "<<avg<<endl;
        ansvec.push_back(avg);
        ans++;
        for(ll i = 0 ; i<n; i++)
            a[i] = llabs(a[i] - avg);
        ll f = 0;
        for(ll i = 0; i<n; i++){
            if(a[i]!=0)
                f = 1;   
        }
        if(f == 0){
            break;
        }
    }
    if(k>=40){
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;
    for(ll i = 0; i<ansvec.size(); i++)
        cout<<ansvec[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}