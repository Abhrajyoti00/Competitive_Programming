#include <iostream>
#include <string>

using namespace std;

void solve() {
    string time_in_string;
    cin >> time_in_string;

    int minute = stoi(time_in_string.substr(3, 2));
    int hour = stoi(time_in_string.substr(0, 2));

    string period = (hour >= 12) ? "PM" : "AM";
    if (hour > 12)
        hour -= 12;
    else if (hour == 0)
        hour = 12;

    printf("%02d:%02d %s\n", hour, minute, period.c_str());
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
