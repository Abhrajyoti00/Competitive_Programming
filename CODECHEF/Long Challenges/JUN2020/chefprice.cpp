#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll p[n],s=0;
        for(ll i=0;i<n;i++)
            {
                cin>>p[i];
                if(p[i]>k)
                {
                    s=s+(p[i]-k);
                }
            }
            cout<<s<<endl;
    }
    return 0;
}