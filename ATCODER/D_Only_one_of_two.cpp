#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

bool isDivisible(long long num, long long divisor) {
    return num % divisor == 0;
}



int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    ll low = 1, high = max(n,m)*2*k;
    ll mid,ans = high;
    while(low<=high){
        mid = (low + high)/2;
        ll numbers = (mid/n) + (mid/m) - (2*(mid/lcm(n,m)));
        if(numbers<k)
            low = mid+1;
        else if(numbers>=k)
            {
                high = mid-1;
                ans = high;
            }
    }
    cout<<ans+1;

    return 0;
}
