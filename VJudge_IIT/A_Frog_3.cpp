#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fun(vector<ll>&v, ll n, ll i, vector<vector<ll>>&dp){
    if(i>n)
        return 0;
    if(i == n)
        return v[i];
    
    if(dp[n][i]!=-1)
        return dp[n][i];
    
    ll sum = 0;
    // cout<<"v[i]"<<" "<<v[i]<<endl;
    sum = max({sum,( v[i] + fun(v, n, i+v[i], dp)), fun(v, n, i+1, dp)});
    // result = max(result, sum);
    // cout<<"i = "<< i<< "Result = "<<result<<endl;
    return dp[n][i] = sum;
}


void solve(){
    ll n;

    cin >> n;
    vector<ll> v(n+1);
    for(ll i = 1; i <= n; i++) cin >> v[i];
    vector<ll>dp(n+2, 0);
    dp[n] = v[n];
    for(ll i = 1; i<=n; i++){
        if(i+v[i] >= n)
            dp[i] = v[i];
    }
    for(ll i=n; i>=1; i--){
        if(i+v[i] <= n){
            dp[i] = v[i] + dp[i+v[i]];
        }
    }
    ll ans = 0;
    for(ll i = 0; i<=n ; i++)
        ans = max(ans, dp[i]);
    cout<< ans<<endl;

    // priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>pq;

    // for(ll i = 1; i<=n; i++){
    //     pq.push({v[i], i});
    // }    
    // ll score = 0;
    // while(!pq.empty()){
    //     auto top = pq.top();
    //     cout<<top.first<<" "<<top.second<<endl;
    //     pq.pop();
    //     score = max(score, top.first);
    //     ll new_index = score + top.second;
    //     if(new_index < n)
    //         pq.push({top.first + v[new_index], new_index});
    // }
    // cout<<score<<endl;

}

int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
}



// TLE SOLN :-


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// ll fun(vector<ll>&v, ll n, ll i, vector<ll>&dp){
//     if(i>n)
//         return 0;
//     if(i == n)
//         return v[i];
//     // if((i + v[i]) > n){
//     //     cout<<"if closed";
//     //     return result;
//     // }
        
//     // else{
//     //     cout<<"else closed";
//     //     return (max(i+v[i], result));
//     // } 
//     if(dp[i]!=-1)
//         return dp[i];
    
//     ll sum = 0;
//     // cout<<"v[i]"<<" "<<v[i]<<endl;
//     sum = max({sum,( v[i] + fun(v, n, i+v[i], dp)), fun(v, n, i+1, dp)});
//     // result = max(result, sum);
//     // cout<<"i = "<< i<< "Result = "<<result<<endl;
//     return dp[i] = sum;
// }


// void solve(){
//     ll n;

//     cin >> n;
//     vector<ll> v(n+1);
//     for(ll i = 1; i <= n; i++) cin >> v[i];
//     vector<ll>dp(200001, -1);
//     // cout<<v[1]<<endl;
//     cout<< fun(v, n, n, dp)<<endl;
// }

// int main(){
//     ll t;
//     cin >> t;
//     while(t--)
//         solve();
// }
