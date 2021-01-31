#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s=0,r,nd,kd,fd;
        cin>>n>>k;
        nd=n%10;
        kd=k%10;
        s=(n-nd)+((nd+kd)%10);
       cout<<s<<endl;
    }
    return 0;
}
