#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i = 0; i<n; i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        sort(v.begin(), v.end());
        int i = 0, j = n-1;
        int s = 0;
        // while(i<j){
        //     s+=v[j]-v[i];
        //     i++;
        //     j--;
        // }
        s = v[j] - v[i];
        cout<<s<<"\n";
    }
    
}