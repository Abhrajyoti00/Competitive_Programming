#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int t,n,d=0,i;
    cin>>t;
    long long int s[t];
    for(i=0;i<t;i++)
    {

        cin>>n;
        d=int(log2(n));
        cout<<d<<endl;
        if(d%4==1)
            s[i]=9;
        else if(d==1)
            s[i]=1;
        else
            s[i]=(d%4);
        d=0;
    }
    for(i=0;i<t;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
