#include <stdio.h>

int MinNumOfBoxes(int n, int l, int s) {
    int x = l * 5;
    if (x >= n) {
        return (n + 4) / 5;
    }
    n -= x;
    if (s >= n) {
        return l + n;
    }
    return -1;
}

int main() {
    int n, l, s;
    scanf("%d %d %d", &n, &l, &s);
    
    int result = MinNumOfBoxes(n, l, s);
    printf("%d\n", result);
    
    return 0;
}
