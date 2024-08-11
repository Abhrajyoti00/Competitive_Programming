#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    if(is_sorted(v.begin(), v.end())){
        cout<<0<<endl;
        return;
    }
    if(v[0] == n && v[n-1] == 1){
        cout<<3<<endl;
        return;
    }
    int i = 0, count = 0, l = 0;
    while(i<n){
        int flag = 0;
        if(v[i] == (i+1)){
            count++;
            for(int j = l; j<i; j++){
                if(v[j] > v[i]){
                    flag = 1;
                }
            }
            if(flag == 1){
                cout<<2<<endl;
                return;
            }
        }
        else{
            l = i;
        }
        i++;
    }
    if(count == 0){
        cout<<2<<endl;
        return;
    }
    else{
        cout<<1<<endl;
    }
    return;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){solve();}
    return 0;
}