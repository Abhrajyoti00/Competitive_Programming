#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Initialize t by taking input
    while (t--) {
        int p, l;
        float ans;
        cin >> p >> l;
        ans = (l / static_cast<float>(p)) * 100; // Ensure floating-point division
        ans >= 75 ? cout << "YES \n" : cout << "NO \n";
    }
    return 0;
}
