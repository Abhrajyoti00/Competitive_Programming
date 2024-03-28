#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    
        if(x<50){
            cout<<"Z"<<endl;
            return;
        }
        if(x>=50){
            if(y<50){
                cout<<"F\n";
                return;
            }
        }
        cout<<"A\n";
        return;
}
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        
        solve();
    }
    
}
