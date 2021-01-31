#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        ll c=0;
        cin>>s;
        for(ll i=0;i<s.length()-1;i++){
            string wrd="";
            wrd= wrd + s.at(i)+s.at(i+1);
            if(wrd=="xy" || wrd=="yx")
            {
                c++;
                i+=1;
            }
        }
        cout<<c<<endl;
    }
}