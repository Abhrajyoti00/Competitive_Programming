#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool sortByFreqDesc(const pair<char, int>& a, const pair<char, int>& b) {
    return a.second > b.second;
}

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char, int> freqMap;

    for (char c : s) {
        if (c != ' ')
            freqMap[c]++;
    }


    priority_queue<pair<int, char>>pq;
    for(auto it : freqMap){
        pq.push({it.second, it.first});
    }
    string st = "";
    for(int i = 0; i<n; i++)
        st+='$';
    int i = 0;
    while(!pq.empty()){
        pair<int, char> top = pq.top();
        pq.pop();
        int count = top.first;
        char ch = top.second;
        while (count){
            if (st[i % n] == '$'){
                st[i % n] = ch;
                i += 2;
                count--;
            }
            else{
                i++;
        }
       }
    }
    cout<<st<<endl;
     
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
}
