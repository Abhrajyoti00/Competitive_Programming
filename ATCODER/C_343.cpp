#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool ispalin(ll n){
    string str = to_string(n);
    int i = 0, j = str.length()-1;
    while(i<j){
        if(str[i]!=str[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    ll n;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    ll am = 0;
    for(ll i = 0; i*i*i<=n; i++){
        ll m=i*i*i;
        if(ispalin(i*i*i)){
            am = max(am, m);
        }
    }
    cout<<am<<endl;
}