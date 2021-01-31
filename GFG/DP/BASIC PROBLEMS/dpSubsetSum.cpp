#include<bits/stdc++.h>
#define ll long long
using namespace std;


bool subs(ll arr[],ll sum, ll n)
{
    bool dp[n+1][sum+1];
    for(ll i=0;i<n+1;i++)
    {
        dp[i][0]=true;
    }
    for(ll i=1;i<sum+1;i++)
    {
        dp[0][i]=false;
    }
    
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s=0;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        if(s%2==1)
        cout<<"NO"<<"\n";
        else
        {
            if(subs(arr,s/2,n)== true)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
    }
}







