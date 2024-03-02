#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        vector<int>a(22,0);
        vector<int>b(22,0);
        for(int i = 0; i<22; i++){
            cin>>a[i];
            cin>>b[i];
        }
        int max_sc = INT_MIN;
        int p = -1;

        for(int i = 0; i<22; i++){
            int ns = a[i]+20*b[i];
            if(max_sc < ns){
                max_sc = ns;
                p = i;
            }
        }
        cout<<p+1<<"\n";
    }
}

int main() {
	
    solve();
}
