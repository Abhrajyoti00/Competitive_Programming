#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    map<int, vector<int>>mp;
    for(int i = 0; i<n; i++){
        for(int j = 0 ; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        vector<int>v;
        for(int j = 0 ; j<n; j++){
            if(arr[i][j])
                v.push_back(j+1);
        }
        sort(v.begin(), v.end());
        mp[i] = v;
    }
    for(auto &it : mp){
        for(auto num : it.second){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}