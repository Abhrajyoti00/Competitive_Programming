#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> va, vb;
        int n, m, k;
        cin >> n >> m >> k;
        set<int> sta;
        set<int> stb;
        for (int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            va.push_back(ele);
            if(ele <= k)
                sta.insert(ele);
        }
        for (int i = 0; i < m; i++) {
            int ele;
            cin >> ele;
            vb.push_back(ele);
            if(ele <= k)
                stb.insert(ele);
        }
        int c1 = sta.size();
        int c2 = stb.size();
        int p = 0;
        unordered_map<int, int>mp;
        for(auto& it: sta){
            mp[it]++;
        }

        for(auto& it: stb){
            mp[it]++;
        }
        if(c1 <k/2 || c2 < k/2){
            cout<<"NO\n";
        }
        else{
            for(auto& [key, val] : mp){
                if(val == 2) // element is twice
                {
                    if(sta.count(key)>0 && c1>k/2){
                        c1--;
                        sta.erase(key);
                    }
                    else if(stb.count(key)>0 && c2>k/2){
                        c2--;
                        stb.erase(key);
                    }
                    else{
                        cout<<"NO \n";
                        p = 1;
                        break;
                    }
                }
            }
            if(p == 0)
                cout<<"YES \n";
        }
    
    }
    return 0;
}
