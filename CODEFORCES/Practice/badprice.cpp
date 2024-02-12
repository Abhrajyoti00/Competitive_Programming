#include<iostream>
using namespace std;
int main()
{
    int i,n,c=0,t,j;
    cin>>t;
    while(t--)
    {
       c=0;
       cin>>n;
        int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                c++;
                break;
            }
        }

    }
    cout<<c;
    }
}
