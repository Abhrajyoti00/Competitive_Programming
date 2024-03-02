#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

void solve() {
    ll n, m;
    cin>>n;
    char trump;
    cin>>trump;
    vector<pair<int, char>>vp;
    unordered_map<char, int> mp;
    unordered_map<char, vector<int>> act_map;
    for(int i =0; i<2*n; i++){
        int a;
        char ch;
        cin>>a>>ch;
        vp.push_back({a,ch});
        mp[ch]++;
        act_map[ch].push_back(a);
    }    

    for(auto &it : act_map){
        sort(it.second.begin(), it.second.end());
    }

    if(mp.find(trump) == mp.end()) // trump nahi hai
    {
        for(auto & it: mp){
            auto a = it.first;
            auto b = it.second;
            if(b & 1)
             {
                 cout<<"IMPOSSIBLE \n";
                 return;
             }  
        }
    }
    else{
        int count = 0;
        for(auto & it: mp){
            auto a = it.first;
            auto b = it.second;
            if(a!=trump) 
                count += b%2;
        }
        if(count>mp[trump]){
            cout<<"IMPOSSIBLE \n";
            return;
        }
    }
    queue<string>st;
    auto vec = act_map[trump];
    for(auto &v: vec)
        {
            string x = to_string(v);
            x+=trump;
            st.push(x);
        }
    for(auto & it: act_map){
        auto a = it.first;
        auto b = it.second;
        if(it.first!=trump){
            int i = 0;
            while(i<b.size()-1){
                cout<<b[i]<<a<<" "<<b[i+1]<<a<<"\n";
                i+=2;
            }
            if(b.size()%2){
                int bn=b.size();
                
                cout<<b[bn-1]<<a<<" "<<st.front()<<"\n";
                st.pop();

            }
        }
    }
    // cout<<"st"<<st.size();
    while(st.size()){
        cout<<st.front();
        st.pop();
        cout<<" ";
        cout<<st.front();
        cout<<"\n";
        st.pop();
    }

}

int main() {
    ll t;
    cin >> t;
    while (t--)
    {
        // cout<<t <<"\n";
        solve();
}

    return 0;
}
