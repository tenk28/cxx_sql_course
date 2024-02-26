#include <stdio.h>

void printArr(int arr[], const int arr_size) {
    for(int i = 0; i < arr_size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// 1 2 3 4 5 -> shift -> 1 3 4 5 5
void shiftArray(int arr[], const int arr_size, int index) {
    for(int i = index; i < arr_size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
}

int findMin(int arr[], const int arr_size) {
    int min = arr[0];
    int index_min = 0;
    for(int i = 1; i < arr_size; ++i) {
        if(arr[i] < min) {
            min = arr[i];
            index_min = i;
        }
    }

    return index_min;
}

int main() {
    int A[] = { 9, 2, 1, 8, 5, 6, 7 };
    const int N = sizeof(A) / sizeof(A[0]);

    printArr(A, N);
    int index = findMin(A, N);
    shiftArray(A, N, index);
    printArr(A, N);

    return 0;
}