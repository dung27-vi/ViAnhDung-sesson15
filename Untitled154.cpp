#include <stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 15};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int total = sumArray(numbers, size);
    printf("Tong cua cac phan tu trong mang la: %d\n", total);
    return 0;
}
