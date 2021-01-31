#include<iostream>
using namespace std;
int main()
{
    long long int i,t,n,k,j,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int a[n],b[k],s[n],c=0,minsum=0,sum=0,flag=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<(n-1);i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                }
            }
        }
        j=0;
        for(i=0;i<k;i++)
        {
            minsum+=a[i];
        }
        c=minsum-a[k-1];
        for(j=k-1;j<n;j++)
        {
            sum=c+a[j];
            if(sum==minsum)
                flag++;
            else if(sum>minsum)
                break;
        }
        cout<<flag;
    }
    return 0;
}
