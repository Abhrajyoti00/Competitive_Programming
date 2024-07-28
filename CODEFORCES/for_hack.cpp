#include <bits/stdc++.h>
using namespace std;
typedef long long int ini;
bool _do(vector<int>&v,int n)
{
    if(n==1) return 1;
    int flag=0;
     for(int i=0;i<v.size();i++)
        {
            bitset<7>b(v[i]);
            int x=0;
            for(int i=5;i>=0;i--)
            {
                x=pow(10,i)*b[i]+x;
            }
            if( n%x==0 && _do(v,n/x)) flag=1;
            if(flag) break;
        }
        return flag;
}
int main()
{
    int t;
    cin>>t;
    vector<int>v;
    for(int i=2;i<=63;i++) v.push_back(i);
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        int d=n;
        int flag=0;
        if(n==1 || n==0) cout<<"YES"<<endl;
        else{
        for(int i=0;i<v.size();i++)
        {
            bitset<7>b(v[i]);
            int x=0;
            for(int i=5;i>=0;i--)
            {
                x=pow(10,i)*b[i]+x;
            }
            if( n%x==0 && _do(v,n/x)) flag=1;
            if(flag) break;

        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }

    }
}
