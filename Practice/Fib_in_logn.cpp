//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    #define ll long long
    
    vector<vector<ll>>mult(vector<vector<ll>>&a, vector<vector<ll>>&b){
        ll n = a.size();
        vector<vector<ll>>ans(n, vector<ll>(n,0));
        
        for(ll i = 0; i<n; i++){
            for(ll j = 0 ; j<n; j++){
                for(ll k = 0; k<n; k++){
                    ans[i][j]+=a[i][k] * b[k][j];
                }
            }
        }
        return ans;
        
    }
    
    vector<vector<ll>>mat_exp(vector<vector<ll>>&a, ll n){
        if(n==0){
            ll sz = a.size();
            vector<vector<ll>>iden(sz, vector<ll>(sz,0));
            for(ll i = 0; i<sz; i++){
                iden[i][i] = 1;
            }
            return iden;
        }
        
        if(n == 1)
            return a;
            
        vector<vector<ll>>temp = mat_exp(a, n/2);
        vector<vector<ll>>ans = mult(temp, temp);
        
        if(n&1){
            ans = mult(ans, a);
        }
        return ans;
    }
    
    long long fib(ll  n){
        vector<vector<ll>> a = {{1, 1}, {1, 0}};
        vector<vector<ll>> ans = mat_exp(a, n);
        ll sz = ans.size();
        
        for(ll i = 0; i<sz; i++){
            for(ll j=0; j<sz; j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }

        return ans[0][1];
    }
    
    long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    // int t;
    // cin >> t;
    // while (t--) {
    //     long long a,b,c,n,m;
        
    //     cin>>a>>b>>c>>n>>m;

    //     Solution ob;
    //     cout << ob.genFibNum(a,b,c,n,m) << endl;
    // }
    ll n;
    cin>>n;
    Solution sol;
    cout<<sol.fib(n);
    return 0;
}
// } Driver Code Ends