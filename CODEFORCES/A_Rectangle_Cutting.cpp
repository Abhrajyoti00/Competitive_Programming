#include <iostream>
#include <string.h>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0)
        {
            cout << "Yes \n";
            continue;
        }
        else if ((a == 1 && b == 2) || (a == 2 && b == 1))
        {
            cout << "No \n";
        }
        else if (a & 1 and b & 1)
        {
            cout << "No" << endl;
        }
        else if (a == 1 and b == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            ll x = 0, y = 0;
            if (a % 2 == 0)
            {
                if (a / 2 == b)
                {
                    cout << "No" << endl;
                    // continue;
                }
                else
                {
                    cout << "Yes" << endl;
                }
            }
            else if (b % 2 == 0)
            {

                if (b / 2 == a)
                {
                    cout << "No" << endl;
                    // continue;
                }
                else
                {
                    cout << "Yes" << endl;
                }
            }
        }
    }
    return 0;
}