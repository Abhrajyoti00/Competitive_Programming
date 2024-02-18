#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        ll md = (4*n) - 2;
        int ans = 0;
        if(k == md)
            ans = ceil(k/2.0)+1;
        else
            ans = ceil(k/2.0);
        cout<<ans<<"\n";
    }
}
