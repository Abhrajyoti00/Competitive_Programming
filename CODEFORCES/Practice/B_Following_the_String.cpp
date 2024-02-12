#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n;
        cin>>n;
        for(int i = 0; i<n; i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        string s;
        // cin>>s;
        unordered_map<char, int>mp;
        for(const auto &it : v){
            if(it == 0){
                char to_put = char(mp.size() + 'a');
                mp[to_put]++;
                s+=to_put;
                // cout<<s<<endl;
            }
            else{
                for(auto& [key, val] : mp){
                    if(val == it){
                        mp[key]++;
                        s+=key;
                        break;
                    }
                }
            }
        }
        cout<<s<<endl;
    }
}