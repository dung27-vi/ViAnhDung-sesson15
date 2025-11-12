#include <stdio.h>

int find_most_frequent(int arr[], int n, int *frequency) {
    int max_count = 0;
    int most_frequent_element = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            most_frequent_element = arr[i];
        }
    }
    *frequency = max_count;
    return most_frequent_element;
}

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2, 1, 1, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int frequency;
    int element = find_most_frequent(arr, n, &frequency);

    printf("Phan tu xuat hien nhieu nhat la: %d\n", element);
    printf("So lan xuat hien: %d\n", frequency);

    return 0;
}
