#include <iostream>
#include <vector>
using namespace std;

string whoWins( vector<int>& buckets) {
    int n = buckets.size();
    int alicePoints = 0, bobPoints = 0;
    bool aliceTurn = true;

    for (int i = 0; i < n; ++i) {
        if (buckets[i] > 0) {
            if (aliceTurn) {
                alicePoints++;
            } else {
                bobPoints++;
            }
            buckets[i]--; 

            if (buckets[i] == 0) {
                if (aliceTurn) {
                    alicePoints++;
                } else {
                    bobPoints++;
                }
            }

            aliceTurn = !aliceTurn; 
        }
    }

    // Determining the winner
    if (alicePoints > bobPoints) {
        return "Alice";
    } else if (alicePoints < bobPoints) {
        return "Bob";
    } else {
        return "Draw";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> buckets(n);
        for (int i = 0; i < n; ++i) {
            cin >> buckets[i];
        }

        cout << whoWins(buckets) << endl;
    }

    return 0;
}
