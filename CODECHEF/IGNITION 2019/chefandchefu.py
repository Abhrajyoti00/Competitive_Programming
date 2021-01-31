#include<bits/stdc++.h>
#define llt long long int
using namespace std;
int main()
{
    llt n;
    cin>>n;
    llt a[n];
    vector<llt>v;
    llt chef,chefu,schef=0,schefu=0,j,i; 
    for(llt i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    for(i=n-1;i>=0;i--){
    vector<llt>::iterator it=lower_bound(v.begin(),v.end(),v[i]);
       chef = std::distance(v.begin(), it);
       if(!((chef-1)<0)){
        vector<llt>::iterator it2=lower_bound(v.begin(),v.end(),v[chef-1]);
         chefu = std::distance(v.begin(), it2);
         
         }
         
        cout<<chef<<" "<<chefu<<endl;
       //cout<<*it<<" "<<*it2<<endl;
    /*for(j=i;j>=chef;j--)
    {
        schef+=v[j];
    }
    for(j=chef-1;j>=chefu;j--)
    {
        schefu+=v[j];
    }
    
    }
    cout<<schef<<" "<<schefu; */
}
}