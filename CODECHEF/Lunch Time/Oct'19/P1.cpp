#include<bits/stdc++.h>
using namespace std;

int getInvCount(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;

    return inv_count;
}

    int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i=0,n,k,j,p;
        cin>>n>>k;
        p=n*k;
        int a[n],b[p];
        for(i=0;i<n;i++)
            cin>>a[i];
        i=0;
        while(i<p)
            {

                for(j=0;j<n;j++)
                {
                    b[i++]=a[j];
                }

            }
             cout<< getInvCount(b,p)<<endl;
    }
    return 0;
}
