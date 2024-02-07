#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int index = 1;
        int n;
        cin>>n;
        vector<int>v;
        for(int i = 0 ; i < n; i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        int unique = 0;
        for(int i = 0; i<n; i++){
            unique ^= v[i];
                    cout<<unique<<" ";

        }
        for(int i = 0; i<n; i++){
            if(v[i] == unique)
                index = i+1;
        }
        cout<<index<<endl;
    }
}