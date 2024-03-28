#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        string rev = string(str.rbegin(), str.rend());
        if(str<=rev)
            cout<<str<<endl;
        else
            cout<<rev+str<<endl;    
    }
}