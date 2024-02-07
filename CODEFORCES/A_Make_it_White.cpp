#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int f = 0;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int fb = 0, lb = 0;
        for(int i = 0; i<s.size(); i++){
           if( s[i] == 'B'){
            fb = i;
            break;
           }
        }
        for(int i = s.size()-1; i>=0; i--){
           if( s[i] == 'B'){
            lb = i;
            break;
           }
        }
        cout<<lb-fb+1<<endl;
    }
}