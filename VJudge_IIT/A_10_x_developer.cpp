#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    /* data */
    ll n, a,b;
    cin>>n>>a>>b;
    priority_queue<ll>mxh;
    priority_queue<ll, vector<ll>, greater<ll>> mnh;
    for(ll i  =0; i<n; i++){
        ll ele;
        cin>>ele;
        mxh.push(ele);
        mnh.push(ele);
    }
    ll ans = mnh.top();
    if((mnh.top() + a) > (mxh.top() - b)){
        cout<<ans<<endl;
        return 0;
    }

    while(!mnh.empty() && !mxh.empty()){
        ll x = mxh.top();
        ll y = mnh.top();
        mxh.pop();
        mnh.pop();
        if(x<y){
            break;
        }
        ans = max({ans, y});
        ll y_bar = y+a;
        ll x_bar = x-b;
        // if(!mxh.empty() && x_bar < mxh.top())
        //     break;
        mxh.push(x_bar);
        mnh.push(y_bar);
    }   

    cout<<ans<<endl;
    return 0;
}
