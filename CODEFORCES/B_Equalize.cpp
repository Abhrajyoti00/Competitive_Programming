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
        sort(v.begin(), v.end());
        int c = n;
        for(int i = 0; i<n; i++){
            v[i]+=c;
            c--;
            cout<<v[i] << ", ";
        }

        int m_c = 0;
        for(int i = 1; i<n; i++){
           if(v[i] == v[i-1])
            m_c++;
        }
        cout<<m_c<<"\n";
    }
}