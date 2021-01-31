#include<bits/stdc++.h>
using namespace std;
#define llt long long int
int main()
{
    llt n,k,sum=0,p=0,s,ss,c=0;
    cin>>n>>k;
    llt y;
    vector<int> v;
    int a[n];
    for(llt i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    for(llt i=0;i<k;i++)
    {
        cin>>y;
        if(y>n)
        {
            cout<<1<<endl;

        }
        else
        {
        
                if(v[y-1]!=v[y])
                {
                    cout<<v[y]<<endl;
                }
                else if((v[y-1]==v[y])&&(y!=(n-1)))
                {
                     auto it=upper_bound(v.begin(),v.end(),v[y-1]);
                     cout<<*it<<endl;
                }
                else
                cout<<-1<<endl;
        }
        
    }
}
    
