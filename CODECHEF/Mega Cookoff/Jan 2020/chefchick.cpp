#include<bits/stdc++.h>
using namespace std;
#define llt long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<llt>v;
        llt n;
        cin>>n;
        llt a[n];
        for(llt i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
}