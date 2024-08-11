#include <stdio.h>
#include <string.h>

char* toHex(int num) {
    static char hex[9];
    char* digits = "0123456789abcdef";
    int i = 7;
    
    while (num) {
        hex[i--] = digits[num % 16];
        num /= 16;
    }
    return &hex[i + 1];
}

int main() {
    int input = 26; // Example input
    printf("%s\n", toHex(input));
    return 0;
}
