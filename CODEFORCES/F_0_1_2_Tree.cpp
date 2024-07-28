#include <iostream>
#include <cmath>

using namespace std;

bool isPossible(int a, int b, int c, int height) {
    int total_vertices = a + b + c;
    int min_edges_required = 2 * a + b; // Minimum number of edges required
    int max_edges_possible = height * (height + 1) / 2; // Maximum number of edges possible

    return min_edges_required <= max_edges_possible && total_vertices >= height;
}

int minHeight(int a, int b, int c) {
    int total_vertices = a + b + c;
    int left = floor(log(total_vertices)) + 1; // Minimum possible height
    int right = total_vertices - 1; // Maximum possible height
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (isPossible(a, b, c, mid)) {
            result = mid;
            right = mid - 1; // Search for smaller heights
        } else {
            left = mid + 1; // Search for larger heights
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int min_height = minHeight(a, b, c);
        if (min_height == -1) {
            cout << min_height << endl;
        } else {
            // Continue binary search to find the minimum height
            int result = min_height;
            for (int h = min_height + 1; h <= a + b + c - 1; ++h) {
                if (isPossible(a, b, c, h)) {
                    result = h;
                } else {
                    break;
                }
            }
            cout << result << endl;
        }
    }

    return 0;
}
