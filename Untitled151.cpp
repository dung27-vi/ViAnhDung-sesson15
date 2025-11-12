#include <stdio.h>

int tinh_toan(int a, int b, char toan_tu) {
    switch (toan_tu) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Loi: Khong the chia cho 0!\n");
                return 0;
            }
        default:
            printf("Loi: Toan tu khong hop le!\n");
            return 0;
    }
}

int main() {
    int so1 = 20;
    int so2 = 4;
    int ket_qua_cong = tinh_toan(so1, so2, '+');
    printf("Ket qua phep cong: %d\n", ket_qua_cong);
    
    int ket_qua_tru = tinh_toan(so1, so2, '-');
    printf("Ket qua phep tru: %d\n", ket_qua_tru);
    
    int ket_qua_nhan = tinh_toan(so1, so2, '*');
    printf("Ket qua phep nhan: %d\n", ket_qua_nhan);
    
    int ket_qua_chia = tinh_toan(so1, so2, '/');
    printf("Ket qua phep chia: %d\n", ket_qua_chia);
    
    return 0;
}
