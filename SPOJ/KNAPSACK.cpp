#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll w,n;
    cin>>w>>n;
    ll wt[n+1],val[n+1];
    ll dp[n+2][w+2];
    for(ll i=0;i<n;i++)
        cin>>wt[i]>>val[i];
    for(ll i=0;i<n+1;i++){
        for(ll j=0;j<n+1;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=w;j++){
            if(wt[i-1]<=j)
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
            else
                dp[i][j]=dp[i-1][j];

        }
    }
    cout<<dp[n][w]<<"\n";
}