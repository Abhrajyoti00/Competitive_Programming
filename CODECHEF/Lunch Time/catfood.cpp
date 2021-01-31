#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,m,i,j;
        cin>>n>>m;
        int a[m],c[m];
        for(i=1;i<=m;i++)
        {
            cin>>a[i];
            c[i]=0;
        }
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=m;j++)
            {
                if(a[i]==a[j])
                    c[i]++;
            }
            if(i!=1)
                if(c[i-1]>c[i])
                cout<<"NO"<<endl;
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
