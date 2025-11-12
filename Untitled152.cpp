#include <stdio.h>

int tinhTongChuSo(int n) {
    int tong = 0;
    n = (n < 0) ? -n : n;
    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int main() {
    int soNguyen = 123;
    printf("Tong cac chu so cua %d la %d\n", soNguyen, tinhTongChuSo(soNguyen));
    return 0;
}
