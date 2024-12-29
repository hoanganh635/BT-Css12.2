#include <stdio.h>
void inMang(int arr[], int n) {
    printf("Các phần tử trong mảng là: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    inMang(arr, n);

    return 0;
}