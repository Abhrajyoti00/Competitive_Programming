#include <bits/stdc++.h>
using namespace std;

bool isLeap(int n)
{
    if (n % 4 == 0 && n % 100 != 0)
    {
        return true;
    }
    else if (n % 400 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int y;
    cin >> y;
    cout << (isLeap(y) ? "366" : "365") << endl;
}
