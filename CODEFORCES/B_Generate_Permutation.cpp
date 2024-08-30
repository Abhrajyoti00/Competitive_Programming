#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m;
    cin >> m;

    vector<int> a(m, -1);

    int p = 0, q = m - 1;
    int c = 1;
    
    while (c <= m)
    {
        if (c % 2 == 1)
        {
            a[p] = c;
            p++;
        }
        else
        {
            a[q] = c;
            q--;
        }
        c++;
    }
    if (m % 2 == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        int r = 0;
        while (r < m)
        {
            cout << a[r] << " ";
            r++;
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
