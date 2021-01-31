#include<bits/stdc++.h>
using namespace std;

    void subsetSums(int arr[], int n, int k)
{

    long long total = 1<<n; int a[n],p;
    int c;

    for (long long i=0; i<total; i++)
    {
        long long sum = 0,c=0;


        for (int j=0; j<n; j++)
            if (i & (1<<j))
                sum += arr[j];
        a[c++]=sum;
        p=a[k+1];
        cout << sum << " ";
    }
    cout<<p<<" "<<k<<endl;
    cout<<p<<" ";
    return;
}

int main()
{
    int n,k,x,i;
    cin>>n>>k;
    int arr[n],b;
    for(i=0;i<n;i++)
        cin>>arr[i];
    int d = sizeof(arr)/sizeof(arr[0]);

    subsetSums(arr, d, k);


    return 0;
}
