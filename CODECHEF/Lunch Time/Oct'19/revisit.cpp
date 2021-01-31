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
        int i,n,q;
        cin>>n;
        int a[n],k,b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<getInvCount(a,n)<<endl;
    }
    return 0;
}
