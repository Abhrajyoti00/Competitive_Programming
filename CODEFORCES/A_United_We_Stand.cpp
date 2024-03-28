#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    
    vector<int>c;
    vector<int>b;
    sort(a.begin(),a.end());
    if (a[0] == a[n-1] ){
        cout<<-1<<endl;
        return;
    }
    for(int i = 0; i<n; i++){
        if(a[i]==a[0])
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(auto &it: b)
        cout<<it<<" ";
    cout<<"\n";
    for(auto &it: c)
        cout<<it<<" ";
    cout<<"\n";
}

int main(){
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
