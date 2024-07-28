#include<bits/stdc++.h>
using namespace std;

int psum(int i){
    
    
    return 0;
}

void  solve(){
    int n, q;
    cin>>n>>q;
    string a, b;
    cin>>a;
    cin>>b;
    map<char, int>ma;
    map<char, int>mb;
    vector<int>psum(n, 0);
    if(a[0] == b[0])
        psum[0] = 0;
    else
        psum[0] = 1;
    ma[a[0]]++;
    mb[b[0]]++;
    for(int i = 1; i<n; i++){
        ma[a[i]]++;
        mb[b[i]]++;
        if(a[i] == b[i]){
            psum[i] = psum[i-1];
        }
        else{
            if(ma[a[i]] != mb[a[i]] && ma[b[i]]!=mb[b[i]])
                psum[i] = psum[i-1] + 1;
            else{
                if(ma[a[i]] == mb[a[i]] && ma[b[i]]==mb[b[i]])
                    psum[i] = psum[i-1] - 1;
                else
                    psum[i] = psum[i-1];
            }   
        }
        // cout<<a[i]<<" "<<ma[a[i]]<<endl;
        // cout<<b[i]<<" "<<mb[b[i]]<<endl;

    }
    // for(int i = 0; i<n; i++){
    //     cout<<psum[i]<<" ";
    // }
    for(int i = 0; i<q; i++){
        int l, r;
        cin>>l>>r;
        if(l == r){
            if(a[l-1]!=b[r-1])
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
        else{
            if(l>1)
                cout<<abs(psum[r-1] - psum[l-2])<<endl;

            else
                cout<<psum[r-1]<<endl; 
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