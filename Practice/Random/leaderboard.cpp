#include<iostream>
using namespace std;
int main()
{
    long i,j,n,k,t,c=0;
    cin>>t;
    cin>>n;
    long a[n];
    for(j=0;j<t;j++)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<=0)
            {
                c++;
            }
        }
    }
    if(c>=k)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
