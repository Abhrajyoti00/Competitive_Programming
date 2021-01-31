#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<ll>v;
    ll marks[n];
    for(ll i=0;i<n;i++){
        cin>>marks[i];
        v.push_back(marks[i]);
    }
    ll m;
    cin>>m;
    ll div[m];
    for(ll i=0;i<m;i++)
    {
        cin>>div[m];
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        v.push_back(div[m]);
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        //sort(v.begin(),v.end());       
        auto it= std::find(v.begin(),v.end(),div[m]);
        cout<<(v.end()-it)<<endl;
        v.erase(it);
    }

}