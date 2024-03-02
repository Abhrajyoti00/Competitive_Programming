#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int countGroups(const vector<int>& nums) {
    unordered_set<int> groups;

    for (int num : nums) {
        int mask = 1 << 30; // Start with the leftmost bit
        int groupMask = 0;

        while (mask > 0) {
            int bit = (num & mask) > 0;
            groupMask |= (1 << bit);
            mask >>= 1;
        }

        groups.insert(groupMask);
    }

    return groups.size();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        int result = countGroups(nums);
        cout << result << endl;
    }

    return 0;
}
