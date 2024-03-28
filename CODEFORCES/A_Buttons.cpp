#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>(b+c)){
        cout<<"First \n";
        return;
    }
    if(b>(a+c)){
        cout<<"Second \n";
        return;
    }
    if(c%2 == 1){
        //a ends
        b = b-1;
        if(a>b){
            cout<<"First \n";
            return;
        }
        else{
            cout<<"Second \n";
            return;
        }
    }
    else{
        //b ends
        if(a>b){
            cout<<"First \n";
            return;
        }
        else{
            cout<<"Second \n";
            return;
        }
    }
    
}

int main(){
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
