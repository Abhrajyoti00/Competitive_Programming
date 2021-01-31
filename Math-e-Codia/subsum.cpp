#include<bits/stdc++.h>
using namespace std;

// Prints sums of all subsets of array
void subsetSums(int arr[], int n)
{
    // There are totoal 2^n subsets
    long long total = 1<<n;

    // Consider all numbers from 0 to 2^n - 1
    for (long long i=0; i<total; i++)
    {
        long long sum = 0;

        // Consider binary reprsentation of
        // current i to decide which elements
        // to pick.
        for (int j=0; j<n; j++)
            if (i & (1<<j))
                sum += arr[j];

        // Print sum of picked elements.
        cout << sum << " ";
    }
}

// Driver code
int main()
{
    int arr[] = {1, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    subsetSums(arr, n);
    return 0;
}
