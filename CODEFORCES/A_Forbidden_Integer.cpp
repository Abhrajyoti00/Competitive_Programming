#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, x;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES\n";
        cout<<n<<endl;
        for(int i = 0; i<n; i++)
            cout<<1<<" ";
        
        cout<<endl;
        return;
    }
    if(k==1){
        cout<<"NO\n";
        return;
    }

    if(k == 2){
        if(n%2==1)
        {
            cout<<"NO\n";
            return;
        }
        else{
            cout<<"YES\n";
            cout<<n/2<<endl;
            for(int i = 0; i<n/2; i++)
                cout<<2<<" ";
            cout<<endl;
        }
        return;
    }
    cout<<"YES\n";
    if(n%2==0){
        cout<<n/2<<endl;
    for(int i = 0; i<n/2; i++)
        cout<<2<<" ";
    cout<<endl;
    return;
    }
    int no2 = int(floor(n/2.0))-1;
    int no3 = (n - no2*2)/3;
    cout<<no2+no3<<endl;
    for(int i = 0; i<no2; i++)
        cout<<2<<" ";
    for(int i =0; i<no3; i++)
        cout<<3<<" ";
    cout<<endl;
    return;
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
