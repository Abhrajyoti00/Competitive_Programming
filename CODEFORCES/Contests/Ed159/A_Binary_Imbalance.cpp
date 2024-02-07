#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int noz = 0, noo = 0;
        vector<char>v;
        for(int i = 0; i<n-1; i++){
            if(s[i]!=s[i+1]){
                v.push_back(s[i]);
                v.push_back('0');
            }
        }
        v.push_back(s[n-1]);

        for(int i = 0 ; i< v.size(); i++)
        {
            if(v[i] == '0')
                noz+=1;
            else
                noo+=1;
        }
        if(noz>noo)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}