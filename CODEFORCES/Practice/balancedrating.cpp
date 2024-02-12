#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s=0,d=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=a[i]/2;
            d+=s;
            cout<<s<<endl;
        }
        else if((i%2==1)&&(i!=n-1))
            {
                s=floor(a[i]/2);
                d+=s;
                cout<<s<<endl;
            }
        else if(i==n-1)
        {
            cout<<-d;
        }
        else
        {
            s=ceil(a[i]/2);
            d+=s;
            cout<<s<<endl;
        }


    }

    return 0;

}
