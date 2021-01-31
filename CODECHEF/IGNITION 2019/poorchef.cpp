#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0,p=0,s,ss,c=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        s=ss=INT_MAX;
        for(int j=0;j<m;j++)
        {
           if(s>a[i][j])
           {
               ss=s;
               s=a[i][j];
           }
           else if (a[i][j] < ss && a[i][j] != s)  
            ss = a[i][j];
        }
        c++;
        if(c==1)
        sum+=s;
        else if (c==2)
        {
            sum+=ss;
            c=0;
        }
    }
    cout<<sum;
}
    