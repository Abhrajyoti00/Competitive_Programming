#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int lar = 0, slar = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > lar)
        {
            slar = lar;
            lar = a[i];
        }
        else if (a[i] > slar)
        {
            slar = a[i];
        }
    }
    int pos = -1;
    for(int i = 0; i<n; i++){
        if(a[i] == slar){
            pos = i;
            break;
        }
    }
    cout << pos+1 << endl;
    return 0;
}

