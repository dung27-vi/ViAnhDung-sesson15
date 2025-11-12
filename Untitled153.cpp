#include <stdio.h>

int reverseNumber(int n) {
    int reversed_n = 0;
    int remainder;

    while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    }
    return reversed_n;
}

int main() {
    int num = 123456789;
    int reversed = reverseNumber(num);

    printf("So nguyen goc: %d\n", num);
    printf("So nguyen dao nguoc: %d\n", reversed);

    return 0;
}
