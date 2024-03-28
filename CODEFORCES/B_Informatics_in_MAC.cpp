#include<bits/stdc++.h>
using namespace std;

int mex(vector<int>v){
    set<int>st;
    for(int i=0; i<v.size(); i++){
        // cout<<"v[i] = "<<v[i]<<" "<<endl;
        st.insert(v[i]);
    }
    for(int i=0; i<v.size(); i++){
        if(st.find(i) == st.end()){
            // cout<<"i = "<<i<<endl;
            return i;
        }
    }
    return v.size();
}

bool alleq(vector<int>v){
    int f = v[0];
    for(int i = 1; i<v.size(); i++){
        if(f!=v[i])
            return false;
    }
    return true;
}

void solve(){
    int n;
        cin>>n;
        vector<int>v1(n,0);
        set<int>v2;
        int eq = 1;
        vector<vector<int>>ans;
        for(int i=0; i<n; i++)
        {
            cin>>v1[i];
            v2.insert(v1[i]);
        }    



        // sort(v2.begin(), v2.end());
        int mn = n;
        for(int i=0; i<n; i++){
            if(v2.find(i) == v2.end()){
                mn = i;
                break;
            }
        }
        // cout<<"mn = "<<mn<<endl;
        if(mn == n){
            // cout<<"killed here \n";
            cout<<-1<<endl;
            return;
        }
        else{
            vector<int>small;
            vector<int>lr;
            
            int l = 1, r = n, f = 0, nr = 1;
            for(int i = 0; i<n; i++){
                lr.push_back(v1[i]);
                if(mex(lr) == mn){
                    nr = i+1;
                    break;
                }
            }
            // if(alleq(v1) or  f == 1)
            // {
            //     small.push_back(l);
            //     small.push_back(nr);
            //     ans.push_back(small);
            //     small.clear();
            //     small.push_back(nr+1);
            //     small.push_back(r);
            //     ans.push_back(small);
            // }

            vector<int>nv;
            vector<int>fv;
            for(int i = nr; i<n; i++)
                fv.push_back(v1[i]);
            if(mex(fv) == mex(lr))
            {
                nv.push_back(nr+1);
                nv.push_back(r);
            ans.push_back({1,nr});
            ans.push_back(nv);}
            else{
                cout<<-1<<endl;
                return;
            }
        }
        // cout<<"size = "<<ans.size()<<endl;
        if(ans.size()>0){
            cout<<ans.size()<<endl;
            for(auto &vec : ans){
                for(auto &it: vec){
                    cout<<it<<" ";
                }
                cout<<endl;
            }
            return;
        }
        
        cout<<-1<<endl;
        return;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();

    }
}