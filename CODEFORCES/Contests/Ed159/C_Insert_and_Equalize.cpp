#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        vector<int>div_array;
        int me = INT_MIN;
        for(int i = 0 ;i<n; i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
            me = max(me, ele);
        }
        

    }
}