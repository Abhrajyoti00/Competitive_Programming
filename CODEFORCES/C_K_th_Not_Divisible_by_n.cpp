#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#define ll unsigned long long

using namespace std;

void solve (){

    ll n, k;
    cin >> n >> k;

    ll l = 1, r = 1e10;
    ll ans = 0;

    while (l <= r){
        ll mid = l + (r - l) / 2;
        ll rem_ele = mid - (mid / n);
        if (rem_ele >= k){
            if (mid % n != 0) ans = mid;
            else ans = mid + 1;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return;
}


int main(){

    int t;
    cin >> t;

    while (t--){
        solve ();
    }

    return 0;
}