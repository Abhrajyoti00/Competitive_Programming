//Prg to add 100 'm' times from position 'a' to'b' and evaluate highest element in the final array

//Created by : Abhrajyoti Kundu

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    int arr[n]={0};
    int pf[n];
    while(m--)
    {
        cin>>a>>b;
        int ul,ll;
        ll=a-1; ul=b-1;
        arr[ll]=arr[ll]+100;
        arr[ul+1]=arr[ul+1]-100;
    }
    pf[0]=arr[0];
    cout<<"The Final Array Is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<n;i++)
    {
        pf[i]=pf[i-1]+arr[i];
    }
    int l=pf[0];
    cout<<endl<<"The Final Prefix Array is : "<<endl;
    cout<<l<<" ";
    for(int i=1;i<n;i++)
    {
        cout<<pf[i]<<" ";
        if(l<pf[i])
        l=pf[i];
    }
    cout<<endl<<"Highest Element is: "<<l;
}