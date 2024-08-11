#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll xc, yc, k;
    cin>>xc>>yc>>k;
    ll sumx = xc*k;
    ll sumy = yc*k;
    ll sumxn = 0;
    ll sumyn = 0;
    ll count = 0;
    if(sumx >= 0 && sumy>=0){
        ll i = 1, j = 1;
        while(count<k-1){
            cout<<i<<" "<<j<<endl;
            sumxn+=i;
            sumyn+=j;
            i++;
            j++;
            count++;
            
        }
        cout<<sumx - sumxn<<" "<<(sumy - sumyn)<<endl;
        return;
    }
    else if(sumx >= 0 && sumy<0){
        ll i = 1, j = -1;
        while(count<k-1){
            cout<<i<<" "<<j<<endl;
            sumxn+=i;
            sumyn+=j;
            i++;
            j--;
            count++;
            
        }
        cout<<sumx - sumxn<<" "<<(sumy - sumyn)<<endl;

        return;
    }
   else if(sumx < 0 && sumy>=0){
        ll i = -1, j = 1;
        while(count<k-1){
            cout<<i<<" "<<j<<endl;
            sumxn+=i;
            sumyn+=j;
            i--;
            j++;
            count++;
            
        }
        cout<<sumx - sumxn<<" "<<(sumy - sumyn)<<endl;

        return;
    } 
    else if(sumx < 0 && sumy<0){
        ll i = -1, j = -1;
        while(count<k-1){
            cout<<i<<" "<<j<<endl;
            sumxn+=i;
            sumyn+=j;
            i--;
            j--;
            count++;
            
        }
        cout<<sumx - sumxn<<" "<<(sumy - sumyn)<<endl;

        return;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        {
        solve();}
}
