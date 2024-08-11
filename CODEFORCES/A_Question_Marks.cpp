#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int uk = 0, a = 0, b = 0, c = 0, d = 0;
    for(auto ch : s){
        if(ch == 'A')
            a++;
        else if(ch == 'B')
            b++;
        else if(ch == 'C')
            c++;
        else if(ch == 'D')
            d++;
        else
            uk++;
    }
    int marks = 0;
    if(a!=0)
        marks+=min(n,a);
    if(b!=0)
        marks+=min(n, b);
    if(c!=0)
        marks+=min(n, c);
    if(d!=0)
        marks+=min(n, d);
    cout<<marks<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}
