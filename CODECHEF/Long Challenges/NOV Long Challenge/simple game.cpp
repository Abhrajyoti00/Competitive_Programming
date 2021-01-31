#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,j,p,chef,s=0;
        cin>>n;
        int c[n];
        long long a[10][10];
        for(i=0;i<n;i++)
        {
            cin>>c[i];
            p=c[i];
            for(j=0;j<p;j++)
                cin>>a[i][j];
        }
        for(i=0;i<n;i++)
        {
            p=c[i];
            if(p%2==0)
                chef=p/2;
            else
                chef=((p+1)/2);
            for(j=0;j<chef;j++)
                s=s+a[i][j];
        }
        cout<<s<<endl;
    }
    return 0;
}
