#include<bits/stdc++.h>
using namespace std;


void  solve(){
    int n, x =0, y =0;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0; i<n;i++)
    {
        cin>>v[i];
        if(v[i] == 1)
            x++;
        else
            y++;
    }
    if(x>=y){
        if(y%2==0){
            cout<<0<<endl;
            return;
        }
        else{
            cout<<1<<endl;
        }
    }
    else{
        if(y%2==0){
            cout<<(y-x)/2<<endl;
            return;
        }
        else{
            cout<<(y-x)<<endl;
        }
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}