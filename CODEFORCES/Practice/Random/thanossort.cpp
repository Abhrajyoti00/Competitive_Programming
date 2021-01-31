#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)    cin>>arr[i];
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
            c1++;
        else
        {
            v1.push_back(c1+1);
            c1=0;
        }
    }
    for(int i=0;i<(n-1)/2;i++)
    {
        if(arr[i]<=arr[i+1])
            c2++;
        else
        {
            v2.push_back(c2+1);
            c2=0;
        }
    }
    for(int i=(n/2);i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
            c3++;
        else
        {
            v3.push_back(c3+1);
            c3=0;
        }
    }
    sort(v1.begin(),v1.end(),greater<int>());
    
    sort(v2.begin(),v2.end(),greater<int>());
    sort(v3.begin(),v3.end(),greater<int>());
        int maxm=max(v1[0],v2[0]);
    maxm=max(maxm,v3[0]);
    
    cout<<maxm<<"\n";
}